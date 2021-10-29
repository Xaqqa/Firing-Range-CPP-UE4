// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/ChildActorComponent.h"
#include "MovingTarget.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UPSKILL_API UMovingTarget : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMovingTarget();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector AnchorOne;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector AnchorTwo;

private:

	UChildActorComponent* Target = nullptr;



	void ToAnchorOne(float DeltaTime);
	void ToAnchorTwo(float DeltaTime);

	UPROPERTY(EditAnywhere) float AnimationTimeInSeconds = 3.f;
	float AnimationTimeElapsed = 0;
	bool bMovingToAnchorOne;
	float DestinationLastReached = 0;
	FVector LocationBeforeAnimation;
};
