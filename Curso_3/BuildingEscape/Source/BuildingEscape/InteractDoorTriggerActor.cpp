// Copyright Theo Leyenda 2022


#include "InteractDoorTriggerActor.h"

#include <Actor.h>

#include "Chaos/GeometryParticlesfwd.h"

AInteractDoorTriggerActor::AInteractDoorTriggerActor() : AInteractDoorTrigger(){}

void AInteractDoorTriggerActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex
	, bool bFromSweep
	, const FHitResult& SweepResult)
{
	Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	
	if(Doors.Num() <= 0){ return; }
	
	for(TSubclassOf<AActor> Actor : ActorsTriggerClass)
	{
		if(Actor)
		{
			if(OtherActor->GetClass() == Actor)
			{
				AddActorActorsInOverlap(OtherActor);
				OpenDoors();
			}
		}
	}
	
}

void AInteractDoorTriggerActor::OnOverlapEnd(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex)
{
	Super::OnOverlapEnd(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex);
	
	if(Doors.Num() <= 0){ return; }
	
	for(TSubclassOf<AActor> Actor : ActorsTriggerClass)
	{
		if(Actor)
		{
			if(OtherActor->GetClass() == Actor)
			{
				RemoveActorActorsInOverlap(OtherActor);
			}
		}
	}
	if(ActorsInOverlap.Num() <= 0)
	{
		CloseDoorByTimeToCloseDoor();
	}
}

bool AInteractDoorTriggerActor::FindActorActorsInOverlap(AActor* Item)
{
	for(int i = 0; i < ActorsInOverlap.Num(); i++)
	{
		if(Item == ActorsInOverlap[i])
		{
			return true;
		}	
	}
	return false;
}

void AInteractDoorTriggerActor::AddActorActorsInOverlap(AActor* Item)
{
	if(!Item){ return;}
	
	if(!FindActorActorsInOverlap(Item))
	{
		ActorsInOverlap.Add(Item);
		UE_LOG(LogTemp, Warning, TEXT("ActorsInOverlap.Num = %d"), ActorsInOverlap.Num());
	}
}

void AInteractDoorTriggerActor::RemoveActorActorsInOverlap(AActor* Item)
{
	if(!Item){ return;}
	
	if(FindActorActorsInOverlap(Item))
	{
		UE_LOG(LogTemp, Warning, TEXT("ActorsInOverlap.Num = %d"), ActorsInOverlap.Num() - 1);
		ActorsInOverlap.Remove(Item);
	}
}


