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
	
	Actor->Destroy();

	return true;
}
