// Fill out your copyright notice in the Description page of Project Settings.

#include "ShootingTarget.h"

// Sets default values
AShootingTarget::AShootingTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collision"));
	SetRootComponent(BoxCollision);
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &AShootingTarget::BeginOverlap);

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	MeshComp->SetupAttachment(BoxCollision);
}

// Called when the game starts or when spawned
void AShootingTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShootingTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShootingTarget::BeginOverlap(UPrimitiveComponent * Comp, AActor * Character, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	/*if (OtherComp->GetOwner()->IsA(AFirstPersonProjectile::StaticClass()))
	{

	}*/
}

