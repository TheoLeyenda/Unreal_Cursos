// Copyright Theo Leyenda 2022


#include "ObjectSpawnLeverSwitch.h"


AObjectSpawnLeverSwitch::AObjectSpawnLeverSwitch():ALeverSwitch(){}

bool AObjectSpawnLeverSwitch::ExecuteInteractInterface(ABuildingScapeCharacter* Character)
{
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
			Spawner->SpawnObjects();
		}
	}
}
