// Copyright Theo Leyenda 2022


#include "ObjectsInteractTrigger.h"

AObjectsInteractTrigger::AObjectsInteractTrigger() : AInteractTrigger(){}

void AObjectsInteractTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                             UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	CheckExecuteInteractInterface(OtherActor);
}

void AObjectsInteractTrigger::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnOverlapEnd(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex);
	CheckExecuteInteractInterface(OtherActor);
}

void AObjectsInteractTrigger::CheckExecuteInteractInterface(AActor* OtherActor)
{
	for(TSubclassOf<AActor> Actor : ObjectsToOverlapCheck)
	{
		if(Actor)
		{
			if(OtherActor->GetClass() == Actor)
			{
				ExecuteInteractInterface(OtherActor);
			}
			else if(LastObjectRegister == ELastStateObjectOverlap::BeginOverlap)
			{
				ExecuteTrap();
			}
		}
	}
}

bool AObjectsInteractTrigger::IsOverlapWithSomeSpecificObject()
{
	return bIsOverlapWithSomeSpecificObject;
}

bool AObjectsInteractTrigger::ExecuteInteractInterface(AActor* Actor)
{
	BoxTriggerVolume->GetOverlappingActors(ActorsInOverlap);
	
	if(LastObjectRegister == ELastStateObjectOverlap::BeginOverlap)
	{
		OnCompleteInteractTrigger.Broadcast(this);
		bIsOverlapWithSomeSpecificObject = true;
	}
	else if(ActorsInOverlap.Num() <= 0)
	{
		bIsOverlapWithSomeSpecificObject = false;
	}
	return true;
}

