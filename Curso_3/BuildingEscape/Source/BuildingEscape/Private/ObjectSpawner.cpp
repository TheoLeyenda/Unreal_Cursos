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

void AObjectSpawner::SendTimerSpawnObject()
{
	GetWorld()->GetTimerManager().SetTimer(TimerSpawnObject,this, &AObjectSpawner::SpawnObjects, DelaySpawnObject, false);
	CurrentIndexSpawn = 0;
	CountObjectSpawn = 0;
}


void AObjectSpawner::SpawnObjects()
{
	if(ObjectsSpawn.Num() <= 0){return;}
	
	if(CurrentIndexSpawn <  ObjectsSpawn.Num())
	{
		ObjectSpawned.Add(World->SpawnActor<AActor>(ObjectsSpawn[CurrentIndexSpawn].ObjectBlueprint, GetActorLocation(), GetActorRotation()));
		CountObjectSpawn++;
		GetWorld()->GetTimerManager().SetTimer(TimerSpawnObject,this, &AObjectSpawner::SpawnObjects, DelaySpawnObject, false);

		if(CountObjectSpawn >= ObjectsSpawn[CurrentIndexSpawn].CountObjectsSpawn)
		{
			CountObjectSpawn = 0;
			CurrentIndexSpawn++;
		}
	}
	
}

void AObjectSpawner::DestroySpawnedObjects()
{
	if(ObjectSpawned.Num() <= 0){return;}
	
	for(AActor* Actor : ObjectSpawned)
	{
		Actor->Destroy();
	}
	ObjectSpawned.Empty();
}



