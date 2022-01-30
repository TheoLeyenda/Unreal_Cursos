// Copyright Theo Leyenda 2022


#include "ObjectsInteractTrigger.h"

AObjectsInteractTrigger::AObjectsInteractTrigger() : AInteractTrigger(){}

void AObjectsInteractTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                             UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	UE_LOG(LogTemp, Warning, TEXT("ENTRE"));
	bIsOverlapWithSomeSpecificObject = true;
}

void AObjectsInteractTrigger::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnOverlapEnd(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex);
	UE_LOG(LogTemp, Warning, TEXT("SALI"));
	bIsOverlapWithSomeSpecificObject = false;
}

bool AObjectsInteractTrigger::IsOverlapWithSomeSpecificObject()
{
	return bIsOverlapWithSomeSpecificObject;
}
