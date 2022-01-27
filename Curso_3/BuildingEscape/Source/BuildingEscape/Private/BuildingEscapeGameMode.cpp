// Copyright Theo Leyenda 2022


#include "BuildingEscapeGameMode.h"
#include "Grabber.h"
#include "Kismet/GameplayStatics.h"

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

void ABuildingEscapeGameMode::Restart()
{
	for(AObjectSpawner* Spawner : SpawnersObjects)
	{
		Spawner->DestroySpawnedObjects();
		Spawner->SpawnObjects();
	}
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


