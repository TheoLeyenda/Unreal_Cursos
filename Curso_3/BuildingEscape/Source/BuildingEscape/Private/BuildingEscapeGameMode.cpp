// Copyright Theo Leyenda 2022


#include "BuildingEscapeGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "BuildingScapeCharacter.h"

void ABuildingEscapeGameMode::BeginPlay()
{
	Super::BeginPlay();

	FindPlayerSpawn();

	FindSpawners();

	Restart();
}

void ABuildingEscapeGameMode::FindPlayerSpawn()
{
	PlayerStart = Cast<APlayerStart>(FindPlayerStart(GetWorld()->GetFirstPlayerController(),"Player Start"));
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
	ABuildingScapeCharacter* BuildingEscapeGameMode = Cast<ABuildingScapeCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	BuildingEscapeGameMode->SetActorLocation(PlayerStart->GetActorLocation());
	for(AObjectSpawner* Spawner : SpawnersObjects)
	{
		Spawner->DestroySpawnedObjects();
		Spawner->SendTimerSpawnObject();
	}

	CurrentCharacter = FindCurrentCharacter();
	if(CurrentCharacter)
	{
		CurrentCharacter->Destroy();
	}
	RestartPlayer(GetWorld()->GetFirstPlayerController());

	CurrentCharacter = FindCurrentCharacter();
	if(CurrentCharacter)
	{
		CurrentCharacter->OnSubstractLife.AddDynamic(this, &ABuildingEscapeGameMode::CheckPlayerDead);
	}
}

ABuildingScapeCharacter* ABuildingEscapeGameMode::GetCurrentCharacter()
{
	return CurrentCharacter;
}


void ABuildingEscapeGameMode::FindSpawners()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(),SpawnerObjectClass,AuxArrayActors);

	SpawnersObjects.Empty();

	for(AActor* Spawner : AuxArrayActors)
	{
		SpawnersObjects.Add(Cast<AObjectSpawner>(Spawner));
	}
}


