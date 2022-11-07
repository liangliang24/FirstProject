// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

#include "FPlayerCharacter.h"
#include "GameFramework/Character.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	RootComponent = StaticMesh;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(StaticMesh);

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	SphereComp->SetupAttachment(StaticMesh);
}


void AWeapon::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	SphereComp->OnComponentBeginOverlap.AddDynamic(this,&AWeapon::BeginOverlap);
}

void AWeapon::BeginOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* Actor,
                           UPrimitiveComponent* PrimitiveComponent1, int I, bool bArg, const FHitResult& HitResult)
{
	if (Actor)
	{
		AFPlayerCharacter* Picker = Cast<AFPlayerCharacter>(Actor);

		if (Picker)
		{
			Equip(Picker);
		}
	}
}

void AWeapon::Equip(AFPlayerCharacter* Picker)
{
	if (Picker)
	{
		StaticMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
		StaticMesh->SetSimulatePhysics(false);

		SphereComp->OnComponentBeginOverlap.RemoveDynamic(this,&AWeapon::BeginOverlap);


		AttachToComponent(Picker->GetWeaponAttachComp(),FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	}
}

