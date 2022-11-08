// Fill out your copyright notice in the Description page of Project Settings.


#include "FPlayerCharacter.h"

#include "FWeapon.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AFPlayerCharacter::AFPlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");
	SpringArmComp->SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");
	CameraComp->SetupAttachment(SpringArmComp);

	//Weapon = CreateDefaultSubobject<AFWeapon>("Weapon");
	SpringArmComp->bUsePawnControlRotation = true;
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
		
	WalkFastSpeed = 1000.0f;
}

// Called when the game starts or when spawned
void AFPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFPlayerCharacter::MoveForward(float value)
{
	FRotator ControlRot = GetControlRotation();

	ControlRot.Pitch = 0.0f;
	ControlRot.Roll = 0.0f;
	
	AddMovementInput(UKismetMathLibrary::GetForwardVector(ControlRot),value);
}

void AFPlayerCharacter::Right(float value)
{
	FRotator ControlRot = GetControlRotation();

	ControlRot.Pitch = 0.0f;
	ControlRot.Roll = 0.0f;
	
	AddMovementInput(UKismetMathLibrary::GetRightVector(ControlRot),value);
}

void AFPlayerCharacter::WalkFast()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkFastSpeed;
}

void AFPlayerCharacter::WalkLow()
{
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}

void AFPlayerCharacter::InCrouch()
{
	Crouch(true);
}

void AFPlayerCharacter::OutCrouch()
{
	UnCrouch(true);
}



// Called to bind functionality to input
void AFPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveForward",this,&AFPlayerCharacter::MoveForward);
	InputComponent->BindAxis("MoveRight",this,&AFPlayerCharacter::Right);
	InputComponent->BindAxis("Turn",this,&APawn::AddControllerYawInput);
	InputComponent->BindAxis("Up",this,&APawn::AddControllerPitchInput);

	InputComponent->BindAction("Jump",IE_Pressed,this,&ACharacter::Jump);

	InputComponent->BindAction("WalkFast",IE_Pressed,this,&AFPlayerCharacter::WalkFast);
	InputComponent->BindAction("WalkLow",IE_Released,this,&AFPlayerCharacter::WalkLow);

	InputComponent->BindAction("Crouch",IE_Pressed,this,&AFPlayerCharacter::InCrouch);
	InputComponent->BindAction("UnCrouch",IE_Released,this,&AFPlayerCharacter::OutCrouch);	
}

