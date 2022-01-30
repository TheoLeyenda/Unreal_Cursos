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

bool AObjectsInteractTrigger::ExecuteInteractInterface()
{
	BoxTriggerVolume->GetOverlappingActors(ActorsInOverlap);
	
	if(LastObjectRegister == ELastStateObjectOverlap::BeginOverlap)
	{
		bIsOverlapWithSomeSpecificObject = true;
	}
	else if(ActorsInOverlap.Num() <= 0)
	{
		bIsOverlapWithSomeSpecificObject = false;
	}
	return true;
}

void AObjectsInteractTrigger::CheckExecuteInteractInterface(AActor* OtherActor)
{
	for(TSubclassOf<AActor> Actor : ObjectsToOverlapCheck)
	{
		if(Actor)
		{
			if(OtherActor->GetClass() == Actor)
			{
				ExecuteInteractInterface();
			}
		}
	}
}


bool AObjectsInteractTrigger::IsOverlapWithSomeSpecificObject()
{
	return bIsOverlapWithSomeSpecificObject;
}
