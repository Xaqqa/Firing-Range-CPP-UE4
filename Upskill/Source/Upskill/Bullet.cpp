// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/ActorComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/UnrealMathUtility.h"
#include "Bullet.h"

// Sets default values for this component's properties
UBullet::UBullet()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBullet::BeginPlay()
{
	Super::BeginPlay();

	UStaticMeshComponent* BulletMesh = GetOwner()->FindComponentByClass<UStaticMeshComponent>();
	BulletMesh->AddImpulse(UKismetMathLibrary::GetForwardVector(BulletMesh->GetRelativeRotation())*BulletInitialVelocity);
}


// Called every frame
void UBullet::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
}

