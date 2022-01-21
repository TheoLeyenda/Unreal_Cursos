// Copyright Theo Leyenda 2022


#include "InteractDoorTrigger.h"

#include "NetworkMessage.h"

// Sets default values
AInteractDoorTrigger::AInteractDoorTrigger()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	BoxTriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxTriggerVolume"));
}

// Called when the game starts or when spawned
void AInteractDoorTrigger::BeginPlay()
{
	Super::BeginPlay();
	//Binding our Proximity Box Component to our Overlap Functions
	BoxTriggerVolume->OnComponentBeginOverlap.AddDynamic(this, &AInteractDoorTrigger::OnOverlapBegin);
	BoxTriggerVolume->OnComponentEndOverlap.AddDynamic(this, &AInteractDoorTrigger::OnOverlapEnd);
}

void AInteractDoorTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex
	, bool bFromSweep
	, const FHitResult& SweepResult)
{
	
}

void AInteractDoorTrigger::OnOverlapEnd(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex)
{
	
}

void AInteractDoorTrigger::OpenDoors()
{
	for(ADoor* Door : Doors)
	{
		Door->SetStateDoor(EStateDoor::Opened);
		Door->CheckDoor();
	}
}

void AInteractDoorTrigger::CloseDoors()
{
	for(ADoor* Door : Doors)
	{
		Door->SetStateDoor(EStateDoor::Closed);
		Door->CheckDoor();
	}
}

void AInteractDoorTrigger::CloseDoorByTimeToCloseDoor()
{
	if(TimeToCloseDoor > 0 && GetWorld())
	{
		enableClearTimer = true;
		GetWorld()->GetTimerManager().SetTimer(TimerCloseDoor,this, &AInteractDoorTrigger::CloseDoors, TimeToCloseDoor, false);
	}
	else
	{
		CloseDoors();
	}
}

void AInteractDoorTrigger::BeginDestroy()
{
	if(enableClearTimer && GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerCloseDoor);
	}
	Super::BeginDestroy();
}



