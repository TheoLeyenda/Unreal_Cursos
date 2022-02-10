// Copyright Theo Leyenda 2022


#include "SpawnObjectByTrigger.h"

ASpawnObjectByTrigger::ASpawnObjectByTrigger() : AObjectsInteractTrigger(){}

bool ASpawnObjectByTrigger::ExecuteInteractInterface(AActor* Actor)
{
	//ACA HACER QUE SE SPAWNEEN LOS OBJETOS SI SE ENCUENTRA EL SPAWNER.

	if(Spawners.Num()<= 0){return false;}

	for(int i = 0; i < Spawners.Num(); i++)
	{
		if(Spawners[i])
		{
			Spawners[i]->bEnableSpawnObject = true;
			Spawners[i]->SendTimerSpawnObject();
		}
	}
	if(Actor && bDestroyOtherObjectInTrigger)
	{
		Actor->Destroy();
	}
	if(bDestroymeInTrigger)
	{
		Destroy();
	}
	
	OnCompleteInteractTrigger.Broadcast(this);
	
	return true;
}
