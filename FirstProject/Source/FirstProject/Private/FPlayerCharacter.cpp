// Fill out your copyright notice in the Description page of Project Settings.


#include "FPlayerCharacter.h"

// Sets default values
AFPlayerCharacter::AFPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

