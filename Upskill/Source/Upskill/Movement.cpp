// Fill out your copyright notice in the Description page of Project Settings.

#include "Camera/CameraComponent.h"
#include "Camera/PlayerCameraManager.h"
#include "Components/ArrowComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/InputComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Containers/Array.h"
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

	HipAnchor->SetRelativeLocation(FVector(35.f, 20.f, 22.f));
	AdsAnchor->SetRelativeLocation(FVector(35.f, 0.f, 48.f));

	Pawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	Character = GetWorld()->GetFirstPlayerController()->GetCharacter();
	Firearm = Pawn->FindComponentByClass<UChildActorComponent>();
	CameraManager = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;

	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

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
	//Firearm->SetRelativeLocation(AdsAnchor->GetRelativeLocation());
}

// Called every frame
void UMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	PlayerLocation = GetOwner()->GetActorLocation();
	PlayerRotation = GetOwner()->GetActorRotation();
	
	FRotator FirearmRotator = FRotator(CameraManager->GetCameraRotation().Pitch, 0.f, 0.f);
	//Firearm->SetRelativeRotation(FirearmRotator);


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
	Pawn->AddControllerPitchInput(AxisValue*-1);
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

