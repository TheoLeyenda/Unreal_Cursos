// Copyright Theo Leyenda 2022


#include "TimeEventOver.h"

UTimeEventOver::UTimeEventOver()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTimeEventOver::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TimerToEvent,this, &UTimeEventOver::CallFinishTimeEvent, DelayToEvent, false);
}

bool UTimeEventOver::ExecuteFinishTimeEvent()
{
	return true;
}

void UTimeEventOver::CallFinishTimeEvent()
{
	ExecuteFinishTimeEvent();
}


