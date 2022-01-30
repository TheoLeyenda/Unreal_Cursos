// Copyright Theo Leyenda 2022


#include "DoorInteractTriggerWithActors.h"

ADoorInteractTriggerWithActors::ADoorInteractTriggerWithActors() : ADoorInteractTrigger(){}

void ADoorInteractTriggerWithActors::OnOverlapBegin(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex
	, bool bFromSweep
	, const FHitResult& SweepResult)
{
	Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	for(TSubclassOf<AActor> Actor : ActorsTriggerClass)
	{
		if(Actor)
		{
			if(OtherActor->GetClass() == Actor)
			{
				ExecuteInteractInterface();
			}
		}
	}
	
}

void ADoorInteractTriggerWithActors::OnOverlapEnd(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex)
{
	Super::OnOverlapEnd(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex);

	for(TSubclassOf<AActor> Actor : ActorsTriggerClass)
	{
		if(Actor)
		{
			if(OtherActor->GetClass() == Actor)
			{
				ExecuteInteractInterface();
			}
		}
	}
}

bool ADoorInteractTriggerWithActors::ExecuteInteractInterface()
{
	if(Doors.Num() <= 0)
	{
		return false;
	}

	BoxTriggerVolume->GetOverlappingActors(ActorsInOverlap);
	
	if(LastObjectRegister == ELastStateObjectOverlap::BeginOverlap)
	{
		UE_LOG(LogTemp, Warning, TEXT("ActorsInOverlap.Num = %d"), ActorsInOverlap.Num());

		OpenDoors();
	}
	else if(ActorsInOverlap.Num() <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("ActorsInOverlap.Num = %d"), ActorsInOverlap.Num() - 1);

		CloseDoorByTimeToCloseDoor();
	}
	return true;
}

