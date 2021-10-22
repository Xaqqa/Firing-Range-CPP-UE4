// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Pawn.h"
#include "Movement.h"


// Sets default values for this component's properties
UMovement::UMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMovement::BeginPlay()
{
	Super::BeginPlay();

	Pawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	InputComponent->BindAxis("MoveForward", this, &UMovement::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &UMovement::MoveRight);

}


// Called every frame
void UMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	GetWorld()->GetFirstPlayerController()->GetPlayerLocation(PlayerLocation);
	GetWorld()->GetFirstPlayerController()->GetPlayerRotation(PlayerRotation);

}

void UMovement::MoveForward()
{
	
FVector PlayerRotationYaw = new FVector (0.f, 0.f, PlayerRotation.Z)
Pawn->AddMovementInput(PlayerRotationYaw, InputComponent->BindAxis("MoveForward"), false);

}

void UMovement::MoveRight()
{



}

