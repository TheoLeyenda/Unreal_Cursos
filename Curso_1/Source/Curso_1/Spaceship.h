// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bullet.h"
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
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UPROPERTY()
	//UPawnMovementComponent* PawnMovementComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "Spaceship - Movement")
	float speed = 10.0f;

	UPROPERTY(EditAnywhere, Category = "Spaceship - Shoot")
	TSubclassOf<class ABullet> BulletBlueprint;

	UPROPERTY(EditAnywhere, Category = "Spaceship - Shoot")
	FVector OffsetSpawnBullet;
	
	void MoveX_Axies(float AxiesValue);
	void MoveY_Axies(float AxiesValue);
	void OnShootPress();
	
	FVector CurrentVelocity;

};
