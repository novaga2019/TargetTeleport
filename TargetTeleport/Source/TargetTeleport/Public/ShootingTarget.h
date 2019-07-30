// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Classes/Components/CapsuleComponent.h"
#include "Engine/Classes/Components/StaticMeshComponent.h"
#include "ShootingTarget.generated.h"

UCLASS()
class TARGETTELEPORT_API AShootingTarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShootingTarget();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void BeginOverlap(UPrimitiveComponent * Comp, AActor * Character, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UPROPERTY(EditAnywhere, Category = "Collision")
		UCapsuleComponent* BoxCollision;

	UPROPERTY(EditAnywhere, Category = "Mesh Component")
		UStaticMeshComponent* MeshComp;
};
