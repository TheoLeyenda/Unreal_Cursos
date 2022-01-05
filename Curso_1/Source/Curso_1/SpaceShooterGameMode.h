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
	
	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning")
	float MIN_TIME_SPAWN = 0.4f;
	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning")
	float MAX_TIME_SPAWN = 2.5f;
	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning")
	float TIME_TO_MAX_DIFICULTY = 60.0f;
	
public:
	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning")
	TSubclassOf<class AEnemy_Cohete> Enemy_CoheteBlueprint;
	
	float DelaySpawnEnemy_Cohete;
	FTimerHandle TimerSpawnEnemy_Cohete;
	
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable, Category= "SpaceShooterGameMode - UMG Game")
	void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);
	
	void AddScore();
	void GameOver();
	void SpawnEnemy_Cohete();
	
protected:	
	int Score = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "SpaceShooterGameMode - UMG Game")
	TSubclassOf<UUserWidget> StartingWidgetClass;

	UPROPERTY()
	UUserWidget* CurrentWidget;
};
