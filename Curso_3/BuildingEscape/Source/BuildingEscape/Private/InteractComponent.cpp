// Copyright Theo Leyenda 2022


#include "InteractComponent.h"
#include "BuildingScapeCharacter.h"

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
	
	return Hit;
}

void UInteractComponent::CheckEnableInteract(float DeltaSeconds)
{
	FHitResult HitResult = GetFirstPhysicsBodyInReach();
	
	ActorHit = HitResult.GetActor();
	
	if(!InteractInterface)
	{
		InteractInterface = Cast<IInteractInterface>(ActorHit);
	}

	if(!PickupComponent && ActorHit)
	{
		PickupComponent = Cast<UPickupComponent>(ActorHit->GetComponentByClass(UPickupComponent::StaticClass()));
		if(PickupComponent)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s"), *ActorHit->GetName());
		}
	}
	else if(!ActorHit)
	{
		PickupComponent = nullptr;
	}
	
	if((!ActorHit || !InteractInterface) && !PickupComponent)
	{
		bEnableInteract = false;
		InteractInterface = nullptr;
	}
	else
	{
		if(InteractInterface)
		{
			InteractInterface->ExecuteInterfaceOnHitInteraction(DeltaSeconds);
		}
		bEnableInteract = true;
	}
}

void UInteractComponent::Interact(ABuildingScapeCharacter* Character)
{
	if(bEnableInteract)
	{
		bool bInterfaceDone = false;
		if(InteractInterface)
		{
			bInterfaceDone = InteractInterface->ExecuteInteractInterface(Character);
		}
			if(ActorHit != nullptr && bInterfaceDone)
		{
			OnInteract.Broadcast(this);
		}
		else if(ActorHit && PickupComponent)
		{
			PickupComponent->ExecuteInteractInterface(Character);
			PickupComponent = nullptr;
			InteractInterface = nullptr;
			bEnableInteract = false;
		}
	}
}

