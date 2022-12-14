// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "FPlayerCharacter.generated.h"

class AFWeapon;
UCLASS()
class FIRSTPROJECT_API AFPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPlayerCharacter();

	
protected:
	UPROPERTY(BlueprintReadOnly)
	float WalkFastSpeed;

	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
    void MoveForward(float value);

    UFUNCTION()
    void Right(float value);

    UFUNCTION()
    void WalkFast();

    UFUNCTION()
    void WalkLow();

	UFUNCTION()
	void InCrouch();

	UFUNCTION()
	void OutCrouch();
	
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComp;
public:
	
protected:
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArmComp;


	void Fire();
	void UnFire();
public:
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	UPROPERTY(EditAnywhere,Category="Attack")
	AFWeapon* Weapon;

	UCameraComponent* GetCamera() const;
};


