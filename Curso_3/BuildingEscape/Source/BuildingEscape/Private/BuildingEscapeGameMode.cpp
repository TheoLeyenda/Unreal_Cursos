// Copyright Theo Leyenda 2022


#include "BuildingEscapeGameMode.h"
#include "BuildingScapeCharacter.h"
#include "Kismet/GameplayStatics.h"

void ABuildingEscapeGameMode::BeginPlay()
{
	Super::BeginPlay();
	CurrentCharacter = FindCurrentCharacter();
	if(CurrentCharacter)
	{
		CurrentCharacter->OnSubstractLife.AddDynamic(this, &ABuildingEscapeGameMode::CheckPlayerDead);
	}
}

void ABuildingEscapeGameMode::CheckPlayerDead()
{
	if(!CurrentCharacter)
	{
		return;
	}

	if(CurrentCharacter->GetPlayerLifes() <= 0)
	{
		Restart();
	}
}

ABuildingScapeCharacter* ABuildingEscapeGameMode::FindCurrentCharacter()
{
	return Cast<ABuildingScapeCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());;
}

void ABuildingEscapeGameMode::Restart()
{
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

void ABuildingEscapeGameMode::LoadMap(FString Name)
{
	UGameplayStatics::OpenLevel(this, FName(Name), false);
}

ABuildingScapeCharacter* ABuildingEscapeGameMode::GetCurrentCharacter()
{
	return CurrentCharacter;
}

void ABuildingEscapeGameMode::ActivateGameOver()
{
	bGameOver = true;
	OnGameoverActivate.Broadcast();
}


