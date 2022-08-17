// Copyright Theo Leyenda 2022


#include "ObjectSpawner.h"
#include "BuildingScapeCharacter.h"

AObjectSpawner::AObjectSpawner()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AObjectSpawner::BeginPlay()
{
	Super::BeginPlay();
	
	World = GetWorld();

	if(bEnableSpawnObject)
	{
		SendTimerSpawnObject();
	}

	BuildingScapeCharacter = Cast<ABuildingScapeCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	if(BuildingScapeCharacter)
	{
		BuildingScapeCharacter->OnSubstractLife.AddDynamic(this, &AObjectSpawner::SendTimerSpawnObject);
	}
}

void AObjectSpawner::SendTimerSpawnObject()
{
	GetWorld()->GetTimerManager().SetTimer(TimerSpawnObject,this, &AObjectSpawner::SpawnObjects, DelaySpawnObject, false);
	CurrentIndexSpawn = 0;
	CountObjectSpawn = 0;
}


void AObjectSpawner::SpawnObjects()
{
	if(ObjectsSpawn.Num() <= 0 || !bEnableSpawnObject || !World){return;}
	
	if(CurrentIndexSpawn <  ObjectsSpawn.Num() && CurrentIndexSpawn >= 0)
	{
		if(ObjectsSpawn[CurrentIndexSpawn].ObjectBlueprint)
		{
			float X = FMath::RandRange(-RangeGeneratorX, RangeGeneratorX) + GetActorLocation().X;
			float Y = FMath::RandRange(-RangeGeneratorY, RangeGeneratorY) + GetActorLocation().Y;
			float Z = GetActorLocation().Z;
			FVector NewLocation = FVector(X,Y,Z);
			
			AActor* Actor = World->SpawnActor<AActor>(ObjectsSpawn[CurrentIndexSpawn].ObjectBlueprint, NewLocation, GetActorRotation());
			if(Actor)
			{
				ObjectSpawned.Add(Actor);
			}
			CountObjectSpawn++;
			GetWorld()->GetTimerManager().SetTimer(TimerSpawnObject,this, &AObjectSpawner::SpawnObjects, DelaySpawnObject, false);

			if(CountObjectSpawn >= ObjectsSpawn[CurrentIndexSpawn].CountObjectsSpawn)
			{
				CountObjectSpawn = 0;
				CurrentIndexSpawn++;
			}
		}
	}
	
}

void AObjectSpawner::DestroySpawnedObjects()
{
	if(ObjectSpawned.Num() <= 0){return;}
	
	for(AActor* Actor : ObjectSpawned)
	{
		if(Actor)
		{
			Actor->Destroy();
		}
	}
	ObjectSpawned.Empty();
}



