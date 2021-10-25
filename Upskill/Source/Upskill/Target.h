// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/SphereComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Movement.h"
#include "Target.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UPSKILL_API UTarget : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTarget();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION() void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);



private:

	UMovement* Player = nullptr;
	UArrowComponent* TargetAnchor = nullptr;
	USphereComponent* SphereCollision = nullptr;

	bool bActive = true;
	bool bShot = false;

	void ActivateTarget(float DeltaTime);
	void DeactivateTarget(float DeltaTime);
	void execActivateTarget();

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true")) TSubclassOf<AActor> Bullet;

	UPROPERTY(EditAnywhere) float AnimationTimeInSeconds = 0.25f;
	float AnimationTimeElapsed = AnimationTimeInSeconds;
	float ReactivationTime;
	float TargetLastShot;
};
