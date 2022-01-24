// Copyright Theo Leyenda 2022


#include "DoorInteractTriggerWithMass.h"

ADoorInteractTriggerWithMass::ADoorInteractTriggerWithMass() : ADoorInteractTrigger(){}

float ADoorInteractTriggerWithMass::TotalMassActors()
{
	if(!BoxTriggerVolume){return 0.0f;}
	
	float TotalMass = 0.0f;
	TArray<AActor*> OverlapingActors;
	
	BoxTriggerVolume->GetOverlappingActors(OverlapingActors);

	for(AActor* Actor : OverlapingActors)
	{
		TotalMass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}
	
	return TotalMass;
}

void ADoorInteractTriggerWithMass::OnOverlapBegin(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex
	, bool bFromSweep
	, const FHitResult& SweepResult)
{
	Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	
	ExecuteInteractInterface();
}

void ADoorInteractTriggerWithMass::OnOverlapEnd(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex)
{
	Super::OnOverlapEnd(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex);

	ExecuteInteractInterface();
}

void ADoorInteractTriggerWithMass::CheckMassInOverlap()
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

bool ADoorInteractTriggerWithMass::ExecuteInteractInterface()
{
	if(Doors.Num() <= 0) { return false;}
	CheckMassInOverlap();
	
	return true;
}