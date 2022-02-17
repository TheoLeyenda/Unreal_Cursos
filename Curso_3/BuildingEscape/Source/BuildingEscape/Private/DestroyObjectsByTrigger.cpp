// Copyright Theo Leyenda 2022

#include "DestroyObjectsByTrigger.h"

void ADestroyObjectsByTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	ExecuteInteractInterface(OtherActor);
	
}

bool ADestroyObjectsByTrigger::ExecuteInteractInterface(AActor* Actor)
{
	if(!Actor){return false;}

	if(bDestroyOtherActor)
	{
		Actor->Destroy();
	}

	if(ActorsDestroy.Num() > 0)
	{
		for(AActor* ActorDestroy : ActorsDestroy)
		{
			if(ActorDestroy)
			{
				ActorDestroy->Destroy();
			}
		}

		ActorsDestroy.Empty();
	}

	OnCompleteInteractTrigger.Broadcast(this);
	
	return true;
}
