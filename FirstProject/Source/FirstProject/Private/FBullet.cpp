// Fill out your copyright notice in the Description page of Project Settings.


#include "FBullet.h"

#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AFBullet::AFBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	RootComponent = SphereComp;
	SphereComp->OnComponentBeginOverlap.AddDynamic(this,&AFBullet::OnBeginOverlap);
	SphereComp->OnComponentHit.AddDynamic(this,&AFBullet::OnHit);
	ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>("ParticleComp");
	ParticleComp->SetupAttachment(SphereComp);
	
	MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>("MovementComp");

	SphereComp->SetEnableGravity(false);
	MovementComp->InitialSpeed = 5000.0f;

	MovementComp->bRotationFollowsVelocity = true;
	MovementComp->bInitialVelocityInLocalSpace = true;
}

// Called when the game starts or when spawned
void AFBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFBullet::OnBeginOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* Actor,
	UPrimitiveComponent* PrimitiveComponent1, int I, bool bArg, const FHitResult& HitResult)
{
	UGameplayStatics::SpawnEmitterAtLocation(this,ExploedParticle,HitResult.Location);
	Destroy();
}

void AFBullet::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	UGameplayStatics::SpawnEmitterAtLocation(this,ExploedParticle,Hit.Location);
	Destroy();
}
// Called every frame
void AFBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

