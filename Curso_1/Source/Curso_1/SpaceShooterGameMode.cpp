// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceShooterGameMode.h"

#include <ThirdParty/openexr/Deploy/OpenEXR-2.3.0/OpenEXR/include/ImathMath.h>

#include "Enemy_Cohete.h"
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
	
}

void ASpaceShooterGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	GameTimer += DeltaTime;
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::FromInt(GetWorld()->GetTimerManager().GetTimerRemaining(TimerSpawnEnemy_Cohete)));
}

void ASpaceShooterGameMode::SpawnEnemy_Cohete()
{
	float DifficultyPorcentage = FMath::Min(GameTimer/TIME_TO_MAX_DIFICULTY, 1.0f);
	DelaySpawnEnemy_Cohete = MAX_TIME_SPAWN - (MAX_TIME_SPAWN - MIN_TIME_SPAWN) * DifficultyPorcentage;

	GetWorld()->GetTimerManager().ClearTimer(TimerSpawnEnemy_Cohete);
	GetWorld()->GetTimerManager().SetTimer(TimerSpawnEnemy_Cohete,this, &ASpaceShooterGameMode::SpawnEnemy_Cohete, DelaySpawnEnemy_Cohete, false);
	
	UWorld* World = GetWorld();
	if(World)
	{
		FVector NewLocation = FVector(FMath::RandRange(-700.0f, 700.0f), 700.0f , 70.0f);
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
		GetWorld()->GetTimerManager().ClearTimer(TimerSpawnEnemy_Cohete);
	}
}


