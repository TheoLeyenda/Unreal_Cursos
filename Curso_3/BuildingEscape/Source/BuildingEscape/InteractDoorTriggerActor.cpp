// Copyright Theo Leyenda 2022


#include "InteractDoorTriggerActor.h"

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
				UE_LOG(LogTemp, Warning, TEXT("ActorsInOverlap.Num = %d"), ActorsInOverlap.Num());
				BoxTriggerVolume->GetOverlappingActors(ActorsInOverlap);
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
				UE_LOG(LogTemp, Warning, TEXT("ActorsInOverlap.Num = %d"), ActorsInOverlap.Num() - 1);
				BoxTriggerVolume->GetOverlappingActors(ActorsInOverlap);
			}
		}
	}
	if(ActorsInOverlap.Num() <= 0)
	{
		CloseDoorByTimeToCloseDoor();
	}
}


