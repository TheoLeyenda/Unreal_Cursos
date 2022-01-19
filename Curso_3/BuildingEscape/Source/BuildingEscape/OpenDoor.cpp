// Copyright Theo Leyenda 2022


#include "OpenDoor.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	FRotator CurrentRotation = GetOwner()->GetActorRotation();
	CurrentRotation.Yaw = 90.0f;

	GetOwner()->SetActorRotation(CurrentRotation);
	//GetOwner()->SetActorEnableCollision(false);
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

