// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.h"
#include "DobleCannon.generated.h"

UCLASS()
class CURSO_1_API ADobleCannon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADobleCannon();

	AActor* Portador;
	
	bool bEnableUsePowerUp = true;
	
	UPROPERTY(EditAnywhere)
	FVector OffsetSpawnBullets;
	
	float DelayDobleCannonDestroy;
	FTimerHandle TimerHandle;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<class ABullet> BulletBlueprint;
	
	UPROPERTY(EditAnywhere)
	FVector SpawnCannonLocation1;
	
	UPROPERTY(EditAnywhere)
	FRotator SpawnCannonRotator1;
	
	UPROPERTY(EditAnywhere)
	FVector SpawnCannonLocation2;
	
	UPROPERTY(EditAnywhere)
	FRotator SpawnCannonRotator2;
	
	void InitDobleCannon();

	void Tick(float DeltaSeconds) override;
	
	void BeginDestroy() override;
	
	void DestroyDobleCannon();
	
	void ShootCannons();

	void ResetTimer(float Delay);
};
