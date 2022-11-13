// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FBullet.h"
#include "FPlayerCharacter.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "FWeapon.generated.h"

UCLASS()
class FIRSTPROJECT_API AFWeapon : public AActor
{
	GENERATED_BODY()
	
public:
	
	// Sets default values for this actor's properties
	AFWeapon();

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* Weapon;
	
	UPROPERTY(VisibleAnywhere)
	USphereComponent* SphereComp;

	UPROPERTY(EditDefaultsOnly,Category="Attack")
	TSubclassOf<AFBullet> Bullet;

	UPROPERTY()
	AFPlayerCharacter* OwnerPawn;
	
	FTimerHandle TimerHandle_Fire;

	UPROPERTY(EditAnywhere,Category="Attack");
	UParticleSystem* FireParticle;

	virtual void PostInitializeComponents() override;

	UFUNCTION()
	virtual void BeginOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* Actor, UPrimitiveComponent* PrimitiveComponent1, int I, bool bArg, const FHitResult& HitResult);

	void Fire();

	void Equip(AFPlayerCharacter* Picker);

public:
	
	void StartFire();
	void StopFire();
};


