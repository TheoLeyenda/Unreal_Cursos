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
	if(bFlagSpawnerUse)
	{
		for(AObjectSpawner* Spawner : Spawners)
		{
			if(Spawner)
			{
				//UE_LOG(LogTemp, Warning, TEXT("ENTRE AL INTERACT"));
				Spawner->SendTimerSpawnObject();
			}
		}
	}
	
	if(bSpawnerOnceUse)
	{
		bFlagSpawnerUse = false;
	}
}

void AObjectSpawnLeverSwitch::EnableSpawners()
{
	if(bEnableSpawnersInBeginPlay)
	{
		for(AObjectSpawner* Spawner : Spawners)
		{
			if(Spawner)
			{
				Spawner->bEnableSpawnObject = true;
			}
		}
	}
}

void AObjectSpawnLeverSwitch::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(TimerEnableSpawn,this, &AObjectSpawnLeverSwitch::EnableSpawners, DelayTimerEnableSpawn, false);
	
}

void AObjectSpawnLeverSwitch::SetEnableSpawners(bool Value)
{
	for(AObjectSpawner* Spawner : Spawners)
	{
		if(Spawner)
		{
			Spawner->bEnableSpawnObject = Value;
		}
	}
}
