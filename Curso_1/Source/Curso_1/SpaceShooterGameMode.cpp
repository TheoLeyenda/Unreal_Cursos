// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceShooterGameMode.h"
#include "Enemy_Cohete.h"

void ASpaceShooterGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void ASpaceShooterGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	GameTimer += DeltaTime;
	DelaySpawnEnemy_Cohete -= DeltaTime;
	if(DelaySpawnEnemy_Cohete <= 0)
	{
		float DifficultyPorcentage = FMath::Min(GameTimer/TIME_TO_MAX_DIFICULTY, 1.0f);
		DelaySpawnEnemy_Cohete = MAX_TIME_SPAWN - (MAX_TIME_SPAWN - MIN_TIME_SPAWN) * DifficultyPorcentage;

		UWorld* World = GetWorld();
		if(World)
		{
			FVector NewLocation = FVector(FMath::RandRange(-700.0f, 700.0f), 700.0f , 70.0f);
			World->SpawnActor<AEnemy_Cohete>(Enemy_CoheteBlueprint, NewLocation, FRotator::ZeroRotator);
		}
	}
}