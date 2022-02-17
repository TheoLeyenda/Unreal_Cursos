// Copyright Theo Leyenda 2022


#include "Trap.h"

#include "QuestSystem/QuestActorComponentID.h"

ATrap::ATrap()
{
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



