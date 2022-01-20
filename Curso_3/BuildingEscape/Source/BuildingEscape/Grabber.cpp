// Copyright Theo Leyenda 2022


#include "Grabber.h"

UGrabber::UGrabber()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	FindPhysicsHandle();
	SetupInputComponent();
}

void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation,OUT PlayerViewPointRotation);
	
	FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * Reach;
	
	if(PhysicsHandle)
	{
		if(PhysicsHandle->GrabbedComponent)
		{
			PhysicsHandle->SetTargetLocation(LineTraceEnd);
		}
	}
		
}

void UGrabber::GrabPressed()
{
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation,OUT PlayerViewPointRotation);
	
	FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * Reach;
	
	FHitResult HitResult = GetFirstPhysicsBodyInReach();
	
	UPrimitiveComponent* ComponentToGrab = HitResult.GetComponent();

	AActor* ActorHit = HitResult.GetActor();
	if(ActorHit)
	{
		if(TypeGrabbel == ETypeGrabbel::AtLocation)
		{
			PhysicsHandle->GrabComponentAtLocation
			(
				ComponentToGrab,
				NAME_None,
				LineTraceEnd
			);
		}
		else if(TypeGrabbel == ETypeGrabbel::AtLocationAndRotation)
		{
			PhysicsHandle->GrabComponentAtLocationWithRotation
			(
				ComponentToGrab,
				NAME_None,
				LineTraceEnd,
				ActorHit->GetActorRotation()
			);
		}
	}
	
}

void UGrabber::GrabRelease()
{
	PhysicsHandle->ReleaseComponent();
}


//Checking for physics handle component
void UGrabber::FindPhysicsHandle()
{
	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if(!PhysicsHandle)
	{
		UE_LOG(LogTemp, Error, TEXT("No physics handle found on %s"), *GetOwner()->GetName());
	}
}

void UGrabber::SetupInputComponent()
{
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	if(InputComponent)
	{
		InputComponent->BindAction("Grab", IE_Pressed, this, &UGrabber::GrabPressed);
		InputComponent->BindAction("Grab", IE_Released, this, &UGrabber::GrabRelease);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No Input Component found on %s"), *GetOwner()->GetName());
	}
}

FHitResult UGrabber::GetFirstPhysicsBodyInReach() const
{
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation,OUT PlayerViewPointRotation);
	
	FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * Reach;
	
	FHitResult Hit;
	FCollisionQueryParams TraceParams(FName(TEXT("")), false, GetOwner());
	GetWorld()->LineTraceSingleByObjectType(
		OUT Hit,
		PlayerViewPointLocation,
		LineTraceEnd,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParams
	);

	return Hit;
}

void UGrabber::ShowLogsPlayerlocationAndRotation()
{
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation,OUT PlayerViewPointRotation);
	if(bShowLogsPlayerLocationAndRotation)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerViewPointLocation: %s, PlayerViewPointRotation: %s")
			, *PlayerViewPointLocation.ToString()
			, *PlayerViewPointRotation.ToString());
	}
}

void UGrabber::ShowDrawDebugLine()
{
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation,OUT PlayerViewPointRotation);

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
}

void UGrabber::ShowLineTraceHitActor(FHitResult Hit)
{
	AActor* ActorHit = Hit.GetActor();
	if(ActorHit)
	{
		//Logging out to test
		UE_LOG(LogTemp, Warning, TEXT("Line trace has hit: %s"), *ActorHit->GetName());
	}
}

