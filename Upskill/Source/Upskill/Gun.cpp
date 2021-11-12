// Fill out your copyright notice in the Description page of Project Settings.

#include "Bullet.h"
#include "Components/ArrowComponent.h"
#include "Components/AudioComponent.h"
#include "Components/InputComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Components/MeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Engine/StaticMesh.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Materials/Material.h"
#include "Particles/ParticleSystem.h"
#include "UObject/ConstructorHelpers.h"
#include "UObject/UObjectGlobals.h"
#include "Movement.h"
#include "Gun.h"

// Sets default values for this component's properties
UGun::UGun()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	GunSlide = CreateDefaultSubobject<UStaticMeshComponent>("Slide");
	SlideEndAnchor = CreateDefaultSubobject<UArrowComponent>("Slide End Anchor");


	static ConstructorHelpers::FObjectFinder<UMaterial>Material(TEXT("/Game/Textures/Firearm/Firearm.Firearm"));
	SlideMaterial = Material.Object;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("/Game/Meshes/Handgun_fbx_6_1_ASCII_Cube_005.Handgun_fbx_6_1_ASCII_Cube_005"));
	SlideMesh = MeshAsset.Object;


}


// Called when the game starts
void UGun::BeginPlay()
{
	Super::BeginPlay();

	SlideEndAnchor->SetRelativeLocation(FVector(0.f, 18.f, 0.f));

	Player = Cast<UMovement>(GetWorld()->GetFirstPlayerController()->GetPawn()->FindComponentByClass<UMovement>());
	InputComponent = GetWorld()->GetFirstPlayerController()->GetPawn()->FindComponentByClass<UInputComponent>();
	Gun = GetOwner()->FindComponentByClass<UStaticMeshComponent>();
	Camera = GetWorld()->GetFirstPlayerController()->GetPawn()->FindComponentByClass<UCameraComponent>();
	GunshotParticles = GetOwner()->FindComponentByClass<UParticleSystemComponent>();
	BulletSpawnAnchor = GetOwner()->FindComponentByClass<UArrowComponent>();
	ReloadSound = GetOwner()->FindComponentByClass<UAudioComponent>();

	GunSlide->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	GunSlide->SetStaticMesh(SlideMesh);
	GunSlide->SetMaterial(0, SlideMaterial);
	GunSlide->AttachToComponent(Gun, FAttachmentTransformRules::SnapToTargetIncludingScale);
	
	if(InputComponent)
	{
		InputComponent->BindAction("Shoot", IE_Pressed, this, &UGun::Shoot);
		InputComponent->BindAction("Reload", IE_Pressed, this, &UGun::Reload);
	}
}

// Called every frame
void UGun::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(bShooting)
	{
		if (SlideAnimationTimeElapsed / 2 <= SlideAnimationInSeconds)
		{
			SlideAnimationEnd(DeltaTime);
		}
		else if (SlideAnimationTimeElapsed <= SlideAnimationInSeconds)
		{
			SlideAnimation(DeltaTime);
		}
		
		if(SlideAnimationTimeElapsed >= SlideAnimationInSeconds)
		{
			bShooting = false;
		}
	}

	if(bReloading)
	{
	
		if (ReloadTimeElapsed <= ReloadTimeInSeconds)
		{
			ReloadAnimation(DeltaTime);
		}

		if (ReloadTimeElapsed >= ReloadTimeInSeconds)
		{
			bReloading = false;
			int32 AmmoCount = Player->Ammo;
			int32 AmmoToReplenish = 7 - AmmoCount;
			Player->SetAmmo(AmmoToReplenish, false);
		}
	}
}


void UGun::Shoot()
{
	if (!bReloading)
	{
		int32 AmmoCount = Player->Ammo;
		if (AmmoCount != 0)
		{
			//Has Ammo
			bShooting = true;
			SlideAnimationTimeElapsed = 0.f;
			GunshotParticles->Activate(true);
			Player->SetAmmo(1, true);
			GetWorld()->SpawnActor<AActor>(Bullet, BulletSpawnAnchor->GetComponentLocation(), BulletSpawnAnchor->GetComponentRotation());
		}
		else
		{
			//No Ammo
			Reload();
		}
	}
}

void UGun::Reload()
{
	int32 AmmoCount = Player->Ammo;
	if (AmmoCount == 7)
	{
		//Cannot Reload
	}
	else
	{
		ReloadTimeElapsed = 0;
		bReloading = true;
		ReloadSound->Play();
	}
}


void UGun::SlideAnimation(float DeltaTime)
{
	FVector SlideLocation = FMath::Lerp(FVector(0.f, 0.f, 0.f), SlideEndAnchor->GetRelativeLocation(), (SlideAnimationTimeElapsed / 2.f) / SlideAnimationInSeconds);
	GunSlide->SetRelativeLocation(SlideLocation);
	SlideAnimationTimeElapsed += DeltaTime;
}

void UGun::SlideAnimationEnd(float DeltaTime)
{
	FVector SlideLocation = FMath::Lerp(SlideEndAnchor->GetRelativeLocation(), FVector(0.f, 0.f, 0.f), (SlideAnimationTimeElapsed / 2.f) / SlideAnimationInSeconds);
	GunSlide->SetRelativeLocation(SlideLocation);
	SlideAnimationTimeElapsed += DeltaTime;
}

void UGun::ReloadAnimation(float DeltaTime)
{
	ReloadTimeElapsed += DeltaTime;
}

