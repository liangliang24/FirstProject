// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "FBullet.generated.h"

UCLASS()
class FIRSTPROJECT_API AFBullet : public AActor
{
	GENERATED_BODY()
	
public:
	
	// Sets default values for this actor's properties
	AFBullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ParticleComp;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* MovementComp;

	UPROPERTY(EditDefaultsOnly,Category="Attack")
	UParticleSystem* ExploedParticle;


	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* Actor,
	                    UPrimitiveComponent* PrimitiveComponent1, int I, bool bArg, const FHitResult& HitResult);

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};


