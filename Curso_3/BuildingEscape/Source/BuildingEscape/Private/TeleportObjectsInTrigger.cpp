// Copyright Theo Leyenda 2022


#include "TeleportObjectsInTrigger.h"

bool ATeleportObjectsInTrigger::ExecuteInteractInterface(AActor* Actor)
{
	if(!Actor)
	{
		return false;
	}
	int Index = FMath::RandRange(0, PointsToTeleport.Num()-1);
	Actor->SetActorLocation(PointsToTeleport[Index]->GetActorLocation());
	
	return true;
}