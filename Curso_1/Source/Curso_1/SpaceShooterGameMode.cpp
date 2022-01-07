// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceShooterGameMode.h"

#include <ThirdParty/openexr/Deploy/OpenEXR-2.3.0/OpenEXR/include/ImathMath.h>

#include "Enemy_Cohete.h"
#include "Shield_PowerUp.h"
#include "DobleCannon_PowerUp.h"
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
	
	GetWorld()->GetTimerManager().SetTimer(TimerSpawnEnemy_Cohete,this, &ASpaceShooterGameMode::SpawnEnemy_Cohete, DelaySpawnEnemy_Cohete, false);

	GetWorld()->GetTimerManager().SetTimer(TimerSpawnPowerUp,this, &ASpaceShooterGameMode::SpawnPowerUp, DelaySpawnPowerUp, false);
}

void ASpaceShooterGameMode::SpawnEnemy_Cohete()
{
	float DifficultyPorcentage = FMath::Min(GetWorld()->GetTimeSeconds()/TIME_TO_MAX_DIFICULTY, 1.0f);
	DelaySpawnEnemy_Cohete = MAX_TIME_SPAWN_ENEMY - (MAX_TIME_SPAWN_ENEMY - MIN_TIME_SPAWN_ENEMY) * DifficultyPorcentage;
	
	GetWorld()->GetTimerManager().SetTimer(TimerSpawnEnemy_Cohete,this, &ASpaceShooterGameMode::SpawnEnemy_Cohete, DelaySpawnEnemy_Cohete, false);
	
	UWorld* World = GetWorld();
	if(World)
	{
		FVector NewLocation = FVector(FMath::RandRange(-700.0f, 700.0f), 600.0f , 70.0f);
		World->SpawnActor<AEnemy_Cohete>(Enemy_CoheteBlueprint, NewLocation, FRotator::ZeroRotator);
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
	Score+= 10;
	UGameWidget* GW = Cast<UGameWidget>(CurrentWidget);
	if(GW) // Puedo usar isValid, Ensure y otras 3 tipos
	{
		GW->SetScore(Score);
	}
}

void ASpaceShooterGameMode::GameOver()
{
	UGameWidget* GW = Cast<UGameWidget>(CurrentWidget);
	if(GW)
	{
		GW->OnGameOver(Score);
	}
}

void ASpaceShooterGameMode::SpawnPowerUp()
{
	DelaySpawnPowerUp = FMath::RandRange(MIN_TIME_SPAWN_POWERUP,MAX_TIME_SPAWN_POWERUP);

	float x = FMath::RandRange(MIN_POS_X_SPAWN_POWERUP, MAX_POS_X_SPAWN_POWERUP);
	float y = FMath::RandRange(MIN_POS_Y_SPAWN_POWERUP, MAX_POS_Y_SPAWN_POWERUP);
	float z = FMath::RandRange(MIN_POS_Z_SPAWN_POWERUP, MAX_POS_Z_SPAWN_POWERUP);
	
	float porcentageSpawnPowerUp = FMath::RandRange(0, 100);
	
	UWorld* World = GetWorld();
	if(World)
	{
		if(porcentageSpawnPowerUp > 50)
		{
			World->SpawnActor<AShield_PowerUp>(Shield_PowerUpBlueprint, FVector(x,y,z), FRotator::ZeroRotator);
		}
		else
		{
			World->SpawnActor<ADobleCannon_PowerUp>(DobleCannon_PowerUpBlueprint, FVector(x,y,z), FRotator::ZeroRotator);
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




