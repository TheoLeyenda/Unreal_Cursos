// Copyright Theo Leyenda 2022


#include "InteractComponent.h"
#include "BuildingScapeCharacter.h"

// Sets default values for this component's properties
UInteractComponent::UInteractComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

FVector UInteractComponent::GetPlayerReach()
{
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation,OUT PlayerViewPointRotation);
	FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * Reach;

	return LineTraceEnd;
}

FHitResult UInteractComponent::GetFirstPhysicsBodyInReach()
{
	FVector LineTraceEnd = GetPlayerReach();
	
	FHitResult Hit;
	FCollisionQueryParams TraceParams(FName(TEXT("")), false, GetOwner());
	GetWorld()->LineTraceSingleByObjectType(
		OUT Hit,
		PlayerViewPointLocation,
		LineTraceEnd,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParams
	);

	AActor* ActorHit = Hit.GetActor();
	return Hit;
}

void UInteractComponent::CheckEnableInteract(float DeltaSeconds)
{
	FHitResult HitResult = GetFirstPhysicsBodyInReach();

	AActor* ActorHit = HitResult.GetActor();
	
	if(!InteractInterface)
	{
		InteractInterface = Cast<IInteractInterface>(ActorHit);
	}
	
	if(!ActorHit || !InteractInterface)
	{
		bEnableInteract = false;
		InteractInterface = nullptr;
	}
	else
	{
		InteractInterface->ExecuteInterfaceOnHitInteraction(DeltaSeconds);
		bEnableInteract = true;
	}
}

void UInteractComponent::Interact(ABuildingScapeCharacter* Character)
{
	if(bEnableInteract)
	{
		InteractInterface->ExecuteInteractInterface(Character);
	}
}
