// Copyright Theo Leyenda 2022


#include "RandomSpawnObject.h"

ARandomSpawnObject::ARandomSpawnObject()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ARandomSpawnObject::BeginPlay()
{
	Super::BeginPlay();

	if(bRandomSpawnOnBeginPlay)
	{
		UseRandomSpawner();
	}
}

void ARandomSpawnObject::UseRandomSpawner()
{
	for(AObjectSpawner* Spawner : Spawners)
	{
		if(Spawner)
		{
			Spawner->bEnableSpawnObject = false;
		}
	}

	int index = FMath::RandRange(0, Spawners.Num() - 1);

	if(Spawners[index])
	{
		Spawners[index]->bEnableSpawnObject = true;
		Spawners[index]->SendTimerSpawnObject();
	}
	
}



