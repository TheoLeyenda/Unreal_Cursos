// Copyright Theo Leyenda 2022


#include "Grabber.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Get Player viewport
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation,OUT PlayerViewPointRotation);
	
	//Logging out to test
	if(bShowLogsTest)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerViewPointLocation: %s, PlayerViewPointRotation: %s")
			, *PlayerViewPointLocation.ToString()
			, *PlayerViewPointRotation.ToString());
	}

	//Draw a line from player showing the reach.
	FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * Reach;
	DrawDebugLine(
		GetWorld(),
		PlayerViewPointLocation,
		LineTraceEnd,
		ColorDebugLine,
		false,
		0.0f,
		0,
		5.
	);
	
	//Ray-Cast out to a certain distance (Reach)

	
	
	//See what it hits
}

