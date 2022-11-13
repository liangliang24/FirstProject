// Fill out your copyright notice in the Description page of Project Settings.


#include "FWeapon.h"

#include "FPlayerCharacter.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFWeapon::AFWeapon()
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


void AFWeapon::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	SphereComp->OnComponentBeginOverlap.AddDynamic(this,&AFWeapon::BeginOverlap);
}

void AFWeapon::BeginOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* Actor,
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

void AFWeapon::Fire()
{
	
	if (Bullet&&OwnerPawn)
	{
	
		
		FVector Start,End;
		FRotator EyeRotation = OwnerPawn->GetControlRotation();

		Start = OwnerPawn->GetCamera()->GetComponentLocation();
		End = Start+5000.0f*EyeRotation.Vector();
		FHitResult Hit;
		FCollisionObjectQueryParams ObjectQueryParams;
		if(GetWorld()->LineTraceSingleByObjectType(Hit,Start,End,ObjectQueryParams))
		{
			End = Hit.ImpactPoint;
		}
		FVector FireLocation = Weapon->GetSocketLocation("MuzzleFlash");
		FTransform SpawnTM = FTransform((End-FireLocation).Rotation(),FireLocation);

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		UGameplayStatics::SpawnEmitterAtLocation(this,FireParticle,FireLocation,EyeRotation);
		
		GetWorld()->SpawnActor<AFBullet>(Bullet,SpawnTM,SpawnParams);
		EyeRotation.Pitch = 0;
		EyeRotation.Roll = 0;
		
		OwnerPawn->SetActorRotation(EyeRotation);
	}
	
}

void AFWeapon::Equip(AFPlayerCharacter* Picker)
{
	if (Picker)
	{
		StaticMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
		StaticMesh->SetSimulatePhysics(false);

		SphereComp->OnComponentBeginOverlap.RemoveDynamic(this,&AFWeapon::BeginOverlap);


		AttachToComponent(Picker->GetMesh(),FAttachmentTransformRules::SnapToTargetNotIncludingScale,"Weapon");

		Picker->Weapon = this;

		OwnerPawn = Picker;
	}
}

void AFWeapon::StartFire()
{
	GetWorldTimerManager().SetTimer(TimerHandle_Fire,this,&AFWeapon::Fire,0.15f,true,0);
}

void AFWeapon::StopFire()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_Fire);
}

