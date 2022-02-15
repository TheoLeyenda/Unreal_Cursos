// Copyright Theo Leyenda 2022


#include "Trap.h"

#include "QuestSystem/QuestActorComponentID.h"

// Sets default values
ATrap::ATrap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	QuestActorComponentID = CreateDefaultSubobject<UQuestActorComponentID>(TEXT("QuestActorComponentID"));
}

void ATrap::BeginPlay()
{
	Super::BeginPlay();
	bEnableUseTrap = true;
}

void ATrap::SendDelayRestartTrap()
{
	GetWorld()->GetTimerManager().SetTimer(TimerResetTrap,this, &ATrap::ResetTrap, DelayRestartTrap, false);
}

void ATrap::ResetTrap()
{
	bEnableUseTrap = true;
}

bool ATrap::ExecuteTrapInterface()
{
	if(!bEnableUseTrap)
	{
		return false;
	}

	SendDelayRestartTrap();
	
	return true;
}



