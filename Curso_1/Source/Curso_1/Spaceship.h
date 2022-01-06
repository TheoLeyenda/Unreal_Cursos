// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bullet.h"
#include "Components/BoxComponent.h"
#include "SpaceShooterGameMode.h"
#include "GameFramework/Pawn.h"
#include "Spaceship.generated.h"

UCLASS()
class CURSO_1_API ASpaceship : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASpaceship();

protected:

	UPROPERTY()
	bool isDead = false;
	
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Spaceship - Movement")
	float speed = 10.0f;

	UPROPERTY(EditAnywhere, Category = "Spaceship - Shoot")
	TSubclassOf<class ABullet> BulletBlueprint;

	UPROPERTY(EditAnywhere, Category= "Spaceship - Destroy")
	TSubclassOf<class AActor> ExplosionBlueprint;
	
	UPROPERTY(EditAnywhere, Category = "Spaceship - Shoot")
	FVector OffsetSpawnBullet;

	UPROPERTY(EditAnywhere, Category= "Spaceship - Collision")
	UBoxComponent* BoxComponent;
	
	void MoveX(float AxiesValue);
	void MoveY(float AxiesValue);
	void Shoot();
	
	FVector CurrentVelocity;
	
	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComponent
		, AActor* OtherActor
		, UPrimitiveComponent* OtherComponent
		, int32 OtherBodyIndex
		, bool bFromSweep
		, const FHitResult& SweepResult);
};
