// Copyright Theo Leyenda 2022


#include "InteractDoorTriggerMass.h"

AInteractDoorTriggerMass::AInteractDoorTriggerMass() : AInteractDoorTrigger(){}

float AInteractDoorTriggerMass::TotalMassActors()
{
	if(!BoxTriggerVolume){return 0.0f;}
	
	float TotalMass = 0.0f;
	TArray<AActor*> OverlapingActors;
	
	BoxTriggerVolume->GetOverlappingActors(OverlapingActors);

	for(AActor* Actor: OverlapingActors)
	{
		TotalMass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}
	
	return TotalMass;
}

void AInteractDoorTriggerMass::OnOverlapBegin(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex
	, bool bFromSweep
	, const FHitResult& SweepResult)
{
	Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	
	ExecuteStrategyInteract();
}

void AInteractDoorTriggerMass::OnOverlapEnd(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex)
{
	Super::OnOverlapEnd(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex);

	ExecuteStrategyInteract();
}

void AInteractDoorTriggerMass::CheckMassInOverlap()
{
	if(TotalMassActors() >= MassToOpenDoor)
	{
		OpenDoors();
	}
	else
	{
		CloseDoorByTimeToCloseDoor();
	}
}

bool AInteractDoorTriggerMass::ExecuteStrategyInteract()
{
	if(Doors.Num() <= 0) { return false;}
	CheckMassInOverlap();

	return true;
}

