// Copyright Theo Leyenda 2022


#include "Trap.h"

// Sets default values
ATrap::ATrap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
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
	if(!bEnableUseTrap){return false;}

	SendDelayRestartTrap();
	
	return true;
}



