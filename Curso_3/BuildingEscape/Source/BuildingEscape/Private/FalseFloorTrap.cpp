// Copyright Theo Leyenda 2022


#include "FalseFloorTrap.h"

void AFalseFloorTrap::ResetTrap()
{
	Super::ResetTrap();

	if(ObjectsFloor.Num() <= 0){return;}
	for(AActor* Actor : ObjectsFloor)
	{
		if(Actor)
		{
			Actor->SetActorEnableCollision(true);
		}
	}
}

bool AFalseFloorTrap::ExecuteTrapInterface()
{
	Super::ExecuteTrapInterface();
	
	if(ObjectsFloor.Num() <= 0){return false;}
	for(AActor* Actor : ObjectsFloor)
	{
		if(Actor)
		{
			Actor->SetActorEnableCollision(false);
		}
	}
	return true;
}
