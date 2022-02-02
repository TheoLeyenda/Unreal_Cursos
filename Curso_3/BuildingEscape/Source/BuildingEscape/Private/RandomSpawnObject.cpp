// Copyright Theo Leyenda 2022


#include "RandomSpawnObject.h"

// Sets default values
ARandomSpawnObject::ARandomSpawnObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}



// Called when the game starts or when spawned
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



