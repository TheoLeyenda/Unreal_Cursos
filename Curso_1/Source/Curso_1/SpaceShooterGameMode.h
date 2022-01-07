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
	
	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning Enemys")
	float MIN_TIME_SPAWN_ENEMY = 0.4f;
	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning Enemys")
	float MAX_TIME_SPAWN_ENEMY = 2.5f;
	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning Enemys")
	float TIME_TO_MAX_DIFICULTY = 60.0f;

	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning PowerUps")
	float MIN_TIME_SPAWN_POWERUP = 5;
	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning PowerUps")
	float MAX_TIME_SPAWN_POWERUP = 10;

	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning PowerUps")
	float MIN_POS_X_SPAWN_POWERUP;
	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning PowerUps")
	float MAX_POS_X_SPAWN_POWERUP;

	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning PowerUps")
	float MIN_POS_Y_SPAWN_POWERUP;
	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning PowerUps")
	float MAX_POS_Y_SPAWN_POWERUP;

	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning PowerUps")
	float MIN_POS_Z_SPAWN_POWERUP;
	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning PowerUps")
	float MAX_POS_Z_SPAWN_POWERUP;
	
public:
	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning Enemys")
	TSubclassOf<class AEnemy_Cohete> Enemy_CoheteBlueprint;

	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning PowerUps")
	TSubclassOf<class AShield_PowerUp> Shield_PowerUpBlueprint;

	UPROPERTY(EditAnywhere, Category= "SpaceShooterGameMode - Spawning PowerUps")
	TSubclassOf<class ADobleCannon_PowerUp> DobleCannon_PowerUpBlueprint;
	
	float DelaySpawnEnemy_Cohete;
	FTimerHandle TimerSpawnEnemy_Cohete;
	
	float DelaySpawnPowerUp = 5.0f;
	FTimerHandle TimerSpawnPowerUp;
	
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable, Category= "SpaceShooterGameMode - UMG Game")
	void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);
	
	void AddScore();
	void GameOver();
	void SpawnEnemy_Cohete();
	void SpawnPowerUp();

	void BeginDestroy() override;
	
protected:	
	int Score = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "SpaceShooterGameMode - UMG Game")
	TSubclassOf<UUserWidget> StartingWidgetClass;

	UPROPERTY()
	UUserWidget* CurrentWidget;
};
