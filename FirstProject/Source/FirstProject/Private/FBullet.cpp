// Fill out your copyright notice in the Description page of Project Settings.


#include "FBullet.h"

#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AFBullet::AFBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>("ParticleComp");
	ParticleComp->SetupAttachment(RootComponent);

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	SphereComp->SetupAttachment(ParticleComp);
}

// Called when the game starts or when spawned
void AFBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

