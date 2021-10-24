// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Camera/CameraComponent.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Movement.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UPSKILL_API UMovement : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMovement();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
		
private:
	UInputComponent* InputComponent = nullptr;
	APawn* Pawn = nullptr;
	ACharacter* Character = nullptr;
	UChildActorComponent* Firearm = nullptr;
	APlayerCameraManager* CameraManager = nullptr;
	UCameraComponent* Camera = nullptr;

	FRotator PlayerRotation;
	FVector PlayerLocation;

	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);

	void LookUp(float AxisValue);
	void LookRight(float AxisValue);

	void Jump();

	void AimIn(float DeltaTime);
	void AimOut(float DeltaTime);
	void execAimIn();
	void execAimOut();

	UArrowComponent* AdsAnchor;
	UArrowComponent* HipAnchor;

	UPROPERTY(EditAnywhere) float AimingSpeedInSeconds = 0.1f;
	FVector AimingStartLocation;
	bool bAiming;
	float AimingTimeElapsed = AimingSpeedInSeconds;
};