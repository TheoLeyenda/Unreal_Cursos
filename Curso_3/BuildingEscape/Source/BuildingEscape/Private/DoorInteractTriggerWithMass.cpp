// Copyright Theo Leyenda 2022


#include "DoorInteractTriggerWithMass.h"

ADoorInteractTriggerWithMass::ADoorInteractTriggerWithMass() : ADoorInteractTrigger(){}

float ADoorInteractTriggerWithMass::TotalMassActors()
{
	if(!BoxTriggerVolume)
	{
		UE_LOG(LogTemp, Warning, TEXT("BoxTriggerVolume: NULL"));
		return 0.0f;
	}
	
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

void ADoorInteractTriggerWithMass::CheckMassInOverlap()
{
	if(TotalMass >= MassToOpenDoor)
	{
		OpenDoors();
		OnCompleteInteractTrigger.Broadcast(this);
	}
	else
	{
		CloseDoorByTimeToCloseDoor();
	}
}

bool ADoorInteractTriggerWithMass::ExecuteInteractInterface()
{

	if(Doors.Num() <= 0)
	{
		return false;
	}
	if(TotalMass < MassToOpenDoor)
	{
		TotalMassActors();
	}
	UE_LOG(LogTemp, Warning, TEXT("TotalMass: %f"), TotalMass);
	CheckMassInOverlap();
	return true;
}