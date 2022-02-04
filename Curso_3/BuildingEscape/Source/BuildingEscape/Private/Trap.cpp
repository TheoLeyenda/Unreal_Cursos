// Copyright Theo Leyenda 2022


#include "Trap.h"

// Sets default values
ATrap::ATrap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

bool ATrap::ExecuteTrapInterface()
{
	return ITrapInterface::ExecuteTrapInterface();
}



