// Copyright Theo Leyenda 2022


#include "SpawnObjectByTrigger.h"

ASpawnObjectByTrigger::ASpawnObjectByTrigger() : AObjectsInteractTrigger(){}

bool ASpawnObjectByTrigger::ExecuteInteractInterface()
{
	//ACA HACER QUE SE SPAWNEEN LOS OBJETOS SI SE ENCUENTRA EL SPAWNER.

	if(!ObjectSpawner){return false;}

	ObjectSpawner->SendTimerSpawnObject();
	
	if(bDestroymeInTrigger)
	{
		Destroy();
	}
	
	return true;
}
