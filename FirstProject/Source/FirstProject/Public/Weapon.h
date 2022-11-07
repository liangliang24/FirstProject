// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPlayerCharacter.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS()
class FIRSTPROJECT_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:
	
	// Sets default values for this actor's properties
	AWeapon();

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* Weapon;
	
	UPROPERTY(VisibleAnywhere)
	USphereComponent* SphereComp;

	virtual void PostInitializeComponents() override;

	UFUNCTION()
	virtual void BeginOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* Actor, UPrimitiveComponent* PrimitiveComponent1, int I, bool bArg, const FHitResult& HitResult);

	void Equip(AFPlayerCharacter* Picker);

};


