// Fill out your copyright notice in the Description page of Project Settings.

#include "Blueprint/UserWidget.h"
#include "Camera/CameraComponent.h"
#include "Camera/PlayerCameraManager.h"
#include "Components/ArrowComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/InputComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Containers/Array.h"
#include "Engine/EngineTypes.h"
#include "Engine/StaticMesh.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/UnrealMathUtility.h"
#include "Movement.h"

#include <functional>

// Sets default values for this component's properties
UMovement::UMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	HipAnchor = CreateDefaultSubobject<UArrowComponent>("Hip Anchor");
	AdsAnchor = CreateDefaultSubobject<UArrowComponent>("ADS Anchor");
}


// Called when the game starts
void UMovement::BeginPlay()
{
	Super::BeginPlay();

	Pawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	Character = GetWorld()->GetFirstPlayerController()->GetCharacter();
	Firearm = Pawn->FindComponentByClass<UChildActorComponent>();
	Camera = Pawn->FindComponentByClass<UCameraComponent>();
	CameraManager = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	
	HipAnchor->AttachToComponent(Camera, FAttachmentTransformRules::KeepRelativeTransform);
	HipAnchor->SetRelativeLocation(FVector(35.f, 20.f, -31.f));
	
	AdsAnchor->AttachToComponent(Camera, FAttachmentTransformRules::KeepRelativeTransform);
	AdsAnchor->SetRelativeLocation(FVector(35.f, 0.f, -16.f));

	Firearm->AttachToComponent(Camera, FAttachmentTransformRules::KeepRelativeTransform);

	if (InputComponent)
	{
		InputComponent->BindAxis("MoveForward", this, &UMovement::MoveForward);
		InputComponent->BindAxis("MoveRight", this, &UMovement::MoveRight);
		InputComponent->BindAxis("LookUp", this, &UMovement::LookUp);
		InputComponent->BindAxis("LookRight", this, &UMovement::LookRight);
		InputComponent->BindAction("Jump", IE_Pressed, this, &UMovement::Jump);
		InputComponent->BindAction("Aim", IE_Pressed, this, &UMovement::execAimIn);
		InputComponent->BindAction("Aim", IE_Released, this, &UMovement::execAimOut);
	}
	Firearm->SetRelativeLocation(HipAnchor->GetRelativeLocation());

	if (HUD)
	{
		MainHUD = CreateWidget<UUserWidget>(GetWorld()->GetFirstPlayerController(), HUD);
		if (MainHUD)
		{
			MainHUD->AddToViewport();

			UE_LOG(LogTemp, Warning, TEXT("HUD ADDED TO VIEWPORT"));
		}
	}
}

// Called every frame
void UMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	PlayerLocation = GetOwner()->GetActorLocation();
	PlayerRotation = GetOwner()->GetActorRotation();
	
	if (bAiming)
	{
		if(AimingTimeElapsed <= AimingSpeedInSeconds)
		{
			AimIn(DeltaTime);
		}
	}
	else
	{
		if (AimingTimeElapsed <= AimingSpeedInSeconds)
		{
			AimOut(DeltaTime);
		}
	}
}

void UMovement::MoveForward(float AxisValue)
{
	FRotator PlayerRotationYawOnly = FRotator(0.f, PlayerRotation.Yaw, 0.f);
	Pawn->AddMovementInput(UKismetMathLibrary::GetForwardVector(PlayerRotationYawOnly), AxisValue, false);
}

void UMovement::MoveRight(float AxisValue)
{
	FRotator PlayerRotationYawOnly = FRotator(0.f, PlayerRotation.Yaw, 0.f);
	Pawn->AddMovementInput(UKismetMathLibrary::GetRightVector(PlayerRotationYawOnly), AxisValue, false);
}

void UMovement::LookUp(float AxisValue)
{
	Camera->SetRelativeRotation(FRotator(FMath::Clamp(Camera->GetRelativeRotation().Pitch + AxisValue, -80.f, 80.f), Camera->GetRelativeRotation().Roll, Camera->GetRelativeRotation().Yaw));
}

void UMovement::LookRight(float AxisValue)
{
	Pawn->AddControllerYawInput(AxisValue);
}

void UMovement::Jump()
{
	Character->Jump();
}
 
void UMovement::execAimIn() 
{
	bAiming = true;
	AimingStartLocation = Firearm->GetRelativeLocation();
	AimingTimeElapsed = 0.f;
}

void UMovement::execAimOut()
{
	bAiming = false;
	AimingStartLocation = Firearm->GetRelativeLocation();
	AimingTimeElapsed = 0.f;
}

void UMovement::AimIn(float DeltaTime)
{
	FVector FirearmLocation = FMath::Lerp(AimingStartLocation, AdsAnchor->GetRelativeLocation(), AimingTimeElapsed / AimingSpeedInSeconds);
	Firearm->SetRelativeLocation(FirearmLocation);
	AimingTimeElapsed += DeltaTime;
}

void UMovement::AimOut(float DeltaTime)
{
	FVector FirearmLocation = FMath::Lerp(AimingStartLocation, HipAnchor->GetRelativeLocation(), AimingTimeElapsed / AimingSpeedInSeconds);
	Firearm->SetRelativeLocation(FirearmLocation);
	AimingTimeElapsed += DeltaTime;
}

void UMovement::AddPoints(int32 PointsToAdd)
{
	Points += PointsToAdd;
	UFunction* CheckPoints = MainHUD->GetClass()->FindFunctionByName(FName("CheckForWin"));
	MainHUD->ProcessEvent(CheckPoints, NULL);
}

void UMovement::SetAmmo(int32 AmmoToChange, bool RemoveAmmo)
{
	if(RemoveAmmo)
	{
		Ammo -= AmmoToChange;
	}
	else
	{
		Ammo += AmmoToChange;
	}
}

