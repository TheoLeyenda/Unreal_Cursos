// Copyright Theo Leyenda 2022


#include "TimeEventOver.h"

// Sets default values for this component's properties
UTimeEventOver::UTimeEventOver()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
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


