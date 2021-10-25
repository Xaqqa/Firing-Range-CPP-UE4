// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingTarget.h"

// Sets default values for this component's properties
UMovingTarget::UMovingTarget()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMovingTarget::BeginPlay()
{
	Super::BeginPlay();

	Target = GetOwner()->FindComponentByClass<UChildActorComponent>();
	Target->SetRelativeLocation(AnchorOne);
}


// Called every frame
void UMovingTarget::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bMovingToAnchorOne)
	{
		if (AnimationTimeElapsed <= AnimationTimeInSeconds)
		{
			ToAnchorOne(DeltaTime);
		}
	}
	else
	{
		if (AnimationTimeElapsed <= AnimationTimeInSeconds)
		{
			ToAnchorTwo(DeltaTime);
		}
	}

	if (AnimationTimeInSeconds <= GetWorld()->GetTimeSeconds() - DestinationLastReached)
	{
		LocationBeforeAnimation = Target->GetRelativeLocation();
		DestinationLastReached = GetWorld()->GetTimeSeconds();
		if(bMovingToAnchorOne)
		{
			bMovingToAnchorOne = false;
			AnimationTimeElapsed = 0;
		}
		else
		{
			bMovingToAnchorOne = true;
			AnimationTimeElapsed = 0;
		}
	}
}

void UMovingTarget::ToAnchorOne(float DeltaTime)
{
	FVector TargetLocation = FMath::Lerp(LocationBeforeAnimation, AnchorOne, AnimationTimeElapsed / AnimationTimeInSeconds);
	Target->SetRelativeLocation(TargetLocation);
	AnimationTimeElapsed += DeltaTime;
}

void UMovingTarget::ToAnchorTwo(float DeltaTime)
{
	FVector TargetLocation = FMath::Lerp(LocationBeforeAnimation, AnchorTwo, AnimationTimeElapsed / AnimationTimeInSeconds);
	Target->SetRelativeLocation(TargetLocation);
	AnimationTimeElapsed += DeltaTime;
}


