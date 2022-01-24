// Copyright Theo Leyenda 2022


#include "DoorInteractTrigger.h"

void ADoorInteractTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex
	, bool bFromSweep
	, const FHitResult& SweepResult)
{
	Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

void ADoorInteractTrigger::OnOverlapEnd(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex)
{
	Super::OnOverlapEnd(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex);
}

void ADoorInteractTrigger::OpenDoors()
{
	for(ADoor* Door : Doors)
	{
		Door->SetStateDoor(EStateDoor::Opened);
		Door->CheckDoor();
	}
}

void ADoorInteractTrigger::CloseDoors()
{
	for(ADoor* Door : Doors)
	{
		Door->SetStateDoor(EStateDoor::Closed);
		Door->CheckDoor();
	}
}

void ADoorInteractTrigger::CloseDoorByTimeToCloseDoor()
{
	if(TimeToCloseDoor > 0 && GetWorld())
	{
		bEnableClearTimer = true;
		GetWorld()->GetTimerManager().SetTimer(TimerCloseDoor,this, &ADoorInteractTrigger::CloseDoors, TimeToCloseDoor, false);
	}
	else
	{
		CloseDoors();
	}
}

void ADoorInteractTrigger::BeginDestroy()
{
	if(bEnableClearTimer && GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerCloseDoor);
	}
	Super::BeginDestroy();
}