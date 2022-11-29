// Fill out your copyright notice in the Description page of Project Settings.


#include "LineTraceInteractComponent.h"
#include "DrawDebugHelpers.h"
#include "InteractionInterface.h"

bool ULineTraceInteractComponent::CheckInteraction()
{
	if(!OwnerController) return false;

	FVector Loc;
	FRotator Rot;
	FHitResult Hit;

	OwnerController->GetPlayerViewPoint(Loc, Rot);

	FVector Start = Loc;
	FVector End = Start + (Rot.Vector() * LineTraceInteractionRange);

	FCollisionQueryParams TraceParams;
	
	TraceParams.AddIgnoredActor(OwnerController);
	if(OwnerPawn)
	{
		TraceParams.AddIgnoredActor(OwnerPawn);
	}

	if(GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams))
	{
		DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 2.0f);
		HitResult = Hit;
	}
	else
	{
		HitResult = FHitResult();
		DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 2.0f);
		return false;
	}
	
	return true;
}

bool ULineTraceInteractComponent::Interaction()
{
	if(auto* Actor = HitResult.GetActor())
	{
		if(auto* InteractedObject = Cast<IInteractionInterface>(Actor))
		{
			InteractedObject->Interact();
			return true;
		}
	}
	return false;
}

void ULineTraceInteractComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                                FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	CheckInteraction();
}
