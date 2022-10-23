// Copyright Theo Leyenda 2022


#include "FalseFloorTrap.h"
#include "Components/StaticMeshComponent.h"

void AFalseFloorTrap::ResetTrap()
{
	Super::ResetTrap();

	if(ObjectsFloor.Num() <= 0){return;}
	for(AActor* Actor : ObjectsFloor)
	{
		if(Actor)
		{
			Actor->SetActorEnableCollision(true);
			StaticMesh = Actor->FindComponentByClass<UStaticMeshComponent>();
			if(StaticMesh)
			{
				StaticMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			}
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
			StaticMesh = Actor->FindComponentByClass<UStaticMeshComponent>();
			if(StaticMesh)
			{
				StaticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			}
		}
	}
	return true;
}
