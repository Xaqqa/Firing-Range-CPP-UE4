// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/ActorComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/SphereComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Math/UnrealMathUtility.h"
#include "Movement.h"
#include "Target.h"

// Sets default values for this component's properties
UTarget::UTarget()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UTarget::BeginPlay()
{
	Super::BeginPlay();

	Player = Cast<UMovement>(GetWorld()->GetFirstPlayerController()->GetPawn()->FindComponentByClass<UMovement>());
	SphereCollision = GetOwner()->FindComponentByClass<USphereComponent>();
	TargetAnchor = GetOwner()->FindComponentByClass<UArrowComponent>();

	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &UTarget::OnOverlapBegin);
}


// Called every frame
void UTarget::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(bActive)
	{
		if(!bShot)
		{
			if (AnimationTimeElapsed <= AnimationTimeInSeconds)
			{
				ActivateTarget(DeltaTime);
			}
		}
	}
	else
	{
		if(bShot)
		{
			if (AnimationTimeElapsed <= AnimationTimeInSeconds / 2)
			{
				DeactivateTarget(DeltaTime);
			}
		}

		if(ReactivationTime <= GetWorld()->GetTimeSeconds() - TargetLastShot)
		{
			execActivateTarget();
		}
	}
}

void UTarget::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AActor* IncomingBullet = OtherActor;
	if(IncomingBullet->GetClass() == Bullet && bActive && !bShot)
	{
		
		
		Player->AddPoints(100);
		TargetLastShot = GetWorld()->GetTimeSeconds();
		ReactivationTime = FMath::FRandRange(3.f, 6.f);
		AnimationTimeElapsed = 0.f;
		bShot = true;
		bActive = false;
		UE_LOG(LogTemp, Warning, TEXT("HIT TARGET"));
	}
}


void UTarget::execActivateTarget()
{
	AnimationTimeElapsed = 0.f;
	bShot = false;
	bActive = true;
}


void UTarget::ActivateTarget(float DeltaTime)
{
	FRotator TargetRotation = FMath::Lerp(FRotator(0.f, 0.f, -90.f), FRotator(0.f, 0.f, 0.f), AnimationTimeElapsed / AnimationTimeInSeconds);
	TargetAnchor->SetRelativeRotation(TargetRotation);
	AnimationTimeElapsed += DeltaTime;
}

void UTarget::DeactivateTarget(float DeltaTime)
{
	FRotator TargetRotation = FMath::Lerp(FRotator(0.f, 0.f, 0.f), FRotator(0.f, 0.f, -90.f), AnimationTimeElapsed / (AnimationTimeInSeconds/2));
	TargetAnchor->SetRelativeRotation(TargetRotation);
	AnimationTimeElapsed += DeltaTime;
}



