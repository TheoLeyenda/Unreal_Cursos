// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SpaceShooterGameMode.generated.h"

/**
 * 
 */
UCLASS()
class CURSO_1_API ASpaceShooterGameMode : public AGameMode
{
	GENERATED_BODY()

	float MIN_TIME_SPAWN = 0.4f;
	float MAX_TIME_SPAWN = 2.5f;
	float TIME_TO_MAX_DIFICULTY = 60.0f;
	
public:
	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning")
	TSubclassOf<class AEnemy_Cohete> Enemy_CoheteBlueprint;

	float DelaySpawnEnemy_Cohete;
	float GameTimer;
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
protected:	
	int Score = 0;
};
