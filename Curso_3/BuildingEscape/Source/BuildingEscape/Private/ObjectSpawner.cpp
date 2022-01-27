// Copyright Theo Leyenda 2022


#include "ObjectSpawner.h"

// Sets default values
AObjectSpawner::AObjectSpawner()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AObjectSpawner::BeginPlay()
{
	Super::BeginPlay();

	World = GetWorld();
	
}

void AObjectSpawner::SpawnObjects()
{
	if(ObjectsSpawn.Num() <= 0){return;}
	
	for (int i = 0; i <  ObjectsSpawn.Num(); i++)
	{
		for(int j = 0; j < ObjectsSpawn[i].CountObjectsSpawn; j++)
		{
			ObjectSpawned.Add(World->SpawnActor<AActor>(ObjectsSpawn[i].ObjectBlueprint, GetActorLocation(), GetActorRotation()));
		}
	}
}

void AObjectSpawner::DestroySpawnedObjects()
{
	if(ObjectSpawned.Num() <= 0){return;}
	
	for(AActor* Actor : ObjectSpawned)
	{
		AActor* AuxActor = Actor;
		ObjectSpawned.RemoveSingle(Actor);
		
		AuxActor->Destroy();
	}
}



