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
#include "Movement.h"

// Sets default values for this component's properties
UMovement::UMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UMovement::BeginPlay()
{
	Super::BeginPlay();

	Pawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	Character = GetWorld()->GetFirstPlayerController()->GetCharacter();
	Firearm = Pawn->FindComponentByClass<UChildActorComponent>();

	

	TArray<UArrowComponent> ArrowComponents;

	//ArrowComponents = Pawn->GetComponents**<UArrowComponent>**(ArrowComponents);
	//AdsAnchor = ArrowComponents[0];

	//HipAnchor = ArrowComponents[0];

	
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	if (InputComponent)
	{
		InputComponent->BindAxis("MoveForward", this, &UMovement::MoveForward);
		InputComponent->BindAxis("MoveRight", this, &UMovement::MoveRight);
		InputComponent->BindAxis("LookUp", this, &UMovement::LookUp);
		InputComponent->BindAxis("LookRight", this, &UMovement::LookRight);
		InputComponent->BindAction("Jump", IE_Pressed, this, &UMovement::Jump);
	}
}


// Called every frame
void UMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	PlayerLocation = Pawn->GetActorLocation();
	PlayerRotation = Pawn->GetActorRotation();
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

