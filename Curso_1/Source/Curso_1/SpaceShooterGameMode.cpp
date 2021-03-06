// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceShooterGameMode.h"

#include <ThirdParty/openexr/Deploy/OpenEXR-2.3.0/OpenEXR/include/ImathMath.h>

#include "Enemy_Cohete.h"
#include "Shield_PowerUp.h"
#include "Enemy_Airplane.h"
#include "DobleCannon_PowerUp.h"
#include "Nuke_PowerUp.h"
#include "GameWidget.h"

#include "../../Plugins/Developer/RiderLink/Source/RD/thirdparty/spdlog/include/spdlog/fmt/bundled/printf.h"

void ASpaceShooterGameMode::BeginPlay()
{
	Super::BeginPlay();

	ChangeMenuWidget(StartingWidgetClass);

	UGameWidget* GW = Cast<UGameWidget>(CurrentWidget);
	if(GW) // Puedo usar isValid, Ensure y otras 3 tipos
	{
		GW->Load();
	}
	
	DelaySpawnEnemy_Cohete = 0.5f;
	
	GetWorld()->GetTimerManager().SetTimer(TimerSpawnEnemy_Cohete,this, &ASpaceShooterGameMode::SpawnEnemy, DelaySpawnEnemy_Cohete, false);

	GetWorld()->GetTimerManager().SetTimer(TimerSpawnPowerUp,this, &ASpaceShooterGameMode::SpawnPowerUp, DelaySpawnPowerUp, false);
}

void ASpaceShooterGameMode::SpawnEnemy()
{
	float DifficultyPorcentage = FMath::Min(GetWorld()->GetTimeSeconds()/TIME_TO_MAX_DIFICULTY, 1.0f);
	DelaySpawnEnemy_Cohete = MAX_TIME_SPAWN_ENEMY - (MAX_TIME_SPAWN_ENEMY - MIN_TIME_SPAWN_ENEMY) * DifficultyPorcentage;
	
	GetWorld()->GetTimerManager().SetTimer(TimerSpawnEnemy_Cohete,this, &ASpaceShooterGameMode::SpawnEnemy, DelaySpawnEnemy_Cohete, false);
	
	UWorld* World = GetWorld();
	if(World)
	{
		
		int enemySelect = FMath::RandRange(0, 100);
		
		if(enemySelect < porcentageSpawnEnemy_Cohete)
		{
			FVector NewLocation = FVector(FMath::RandRange(-700.0f, 700.0f), 600.0f , 70.0f);
			World->SpawnActor<AEnemy_Cohete>(Enemy_CoheteBlueprint, NewLocation, FRotator::ZeroRotator);
		}
		else if(enemySelect >= porcentageSpawnEnemy_Cohete)
		{
			FVector NewLocation = FVector(FMath::RandRange(-600.0f, 600.0f), 400.0f , 70.0f);
			World->SpawnActor<AEnemy_Airplane>(Enemy_AirplaneBlueprint, NewLocation, FRotator::ZeroRotator);
		}
	}
	
}


void ASpaceShooterGameMode::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
	if(CurrentWidget != nullptr)
	{
		CurrentWidget->RemoveFromViewport();
		CurrentWidget = nullptr;
	}

	if(NewWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass);

		if(CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

void ASpaceShooterGameMode::AddScore()
{
	Score+= ScoreForEnemy_CoheteDie;
	UGameWidget* GW = Cast<UGameWidget>(CurrentWidget);
	if(GW) // Puedo usar isValid, Ensure y otras 3 tipos
	{
		GW->SetScore_Implementation(Score);
	}
}

void ASpaceShooterGameMode::GameOver()
{
	UGameWidget* GW = Cast<UGameWidget>(CurrentWidget);
	if(GW)
	{
		GW->OnGameOver_Implementation(Score);
	}
}

void ASpaceShooterGameMode::SpawnPowerUp()
{
	DelaySpawnPowerUp = FMath::RandRange(MIN_TIME_SPAWN_POWERUP,MAX_TIME_SPAWN_POWERUP);


	FVector NewLocationSpawn = FVector::ZeroVector;
	
	NewLocationSpawn.X = FMath::RandRange(MIN_POS_X_SPAWN_POWERUP, MAX_POS_X_SPAWN_POWERUP);
	NewLocationSpawn.Y = FMath::RandRange(MIN_POS_Y_SPAWN_POWERUP, MAX_POS_Y_SPAWN_POWERUP);
	NewLocationSpawn.Z = FMath::RandRange(MIN_POS_Z_SPAWN_POWERUP, MAX_POS_Z_SPAWN_POWERUP);
	
	float porcentageSpawnPowerUp = FMath::RandRange(0, 150);
	
	UWorld* World = GetWorld();
	if(World)
	{
		if(porcentageSpawnPowerUp <= 50)
		{
			World->SpawnActor<AShield_PowerUp>(Shield_PowerUpBlueprint, NewLocationSpawn, FRotator::ZeroRotator);
		}
		else if(porcentageSpawnPowerUp > 50 && porcentageSpawnPowerUp < 100)
		{
			World->SpawnActor<ADobleCannon_PowerUp>(DobleCannon_PowerUpBlueprint, NewLocationSpawn, FRotator::ZeroRotator);
		}
		else if(porcentageSpawnPowerUp >= 100)
		{
			World->SpawnActor<ANuke_PowerUp>(Nuke_PowerUpBlueprint, NewLocationSpawn, FRotator::ZeroRotator);
		}
		World->GetTimerManager().SetTimer(TimerSpawnPowerUp,this, &ASpaceShooterGameMode::SpawnPowerUp, DelaySpawnPowerUp, false);
	}
	
	
}

void ASpaceShooterGameMode::BeginDestroy()
{
	if(GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerSpawnEnemy_Cohete);
		GetWorld()->GetTimerManager().ClearTimer(TimerSpawnPowerUp);
	}

	Super::BeginDestroy();
}




