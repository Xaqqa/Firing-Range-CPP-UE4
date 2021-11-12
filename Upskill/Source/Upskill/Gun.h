// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Bullet.h"
#include "Camera/CameraComponent.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/AudioComponent.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/Material.h"
#include "Movement.h"
#include "Particles/ParticleSystem.h"
#include "Gun.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UPSKILL_API UGun : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGun();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintReadOnly) bool bReloading = false;
	
private:
	UMovement* Player = nullptr;
	UInputComponent* InputComponent = nullptr;
	UStaticMeshComponent* Gun = nullptr;
	UStaticMeshComponent* GunSlide = nullptr;
	UArrowComponent* SlideEndAnchor = nullptr;
	UCameraComponent* Camera = nullptr;
	UAudioComponent* ReloadSound = nullptr;

	UStaticMesh* SlideMesh = nullptr;
	UMaterial* SlideMaterial = nullptr;
	UParticleSystemComponent* GunshotParticles = nullptr;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true")) TSubclassOf<AActor> Bullet;

	void Shoot();
	void Reload();
	void SlideAnimation(float DeltaTime);
	void SlideAnimationEnd(float DeltaTime);
	void ReloadAnimation(float DeltaTime);

	UArrowComponent* BulletSpawnAnchor = nullptr;

	bool bShooting;
	UPROPERTY(EditAnywhere) float SlideAnimationInSeconds = 0.1f;
	float SlideAnimationTimeElapsed = SlideAnimationInSeconds;

	UPROPERTY(EditAnywhere) float ReloadTimeInSeconds = 2.5f;
	float ReloadTimeElapsed = ReloadTimeInSeconds;
	
};
