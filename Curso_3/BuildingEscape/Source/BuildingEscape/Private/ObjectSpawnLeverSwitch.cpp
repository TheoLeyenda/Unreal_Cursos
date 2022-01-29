// Copyright Theo Leyenda 2022


#include "ObjectSpawnLeverSwitch.h"


AObjectSpawnLeverSwitch::AObjectSpawnLeverSwitch():ALeverSwitch(){}

bool AObjectSpawnLeverSwitch::ExecuteInteractInterface(ABuildingScapeCharacter* Character)
{
	Super::ExecuteInteractInterface(Character);
	
	if(Spawners.Num() <= 0) {return false;}
	
	if(bSpawnObjectToPositiveLeverSwitch)
	{
		
		if(bSwitchOn)
		{
			SpawnObect();
		}
		else
		{
			return false;
		}
	}
	else
	{
		SpawnObect();
	}
	return true;
}

void AObjectSpawnLeverSwitch::SpawnObect()
{
	for(AObjectSpawner* Spawner : Spawners)
	{
		if(Spawner)
		{
			UE_LOG(LogTemp, Warning, TEXT("ENTRE AL INTERACT"));
			Spawner->SendTimerSpawnObject();
		}
	}
}

void AObjectSpawnLeverSwitch::BeginPlay()
{
	Super::BeginPlay();

	EnableSpawners();
}

void AObjectSpawnLeverSwitch::EnableSpawners()
{
	for(AObjectSpawner* Spawner : Spawners)
	{
		if(Spawner)
		{
			Spawner->bEnableSpawnObject = true;
		}
	}
}
