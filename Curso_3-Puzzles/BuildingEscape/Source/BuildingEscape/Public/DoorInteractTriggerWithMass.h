// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "DoorInteractTrigger.h"
#include "DoorInteractTriggerWithMass.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ADoorInteractTriggerWithMass : public ADoorInteractTrigger
{
	GENERATED_BODY()
public:
	ADoorInteractTriggerWithMass();

	float TotalMassActors();
protected:
	float TotalMass = 0.0f;
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp
		, AActor* OtherActor
		, UPrimitiveComponent* OtherComp
		, int32 OtherBodyIndex
		, bool bFromSweep
		, const FHitResult& SweepResult) override;
	
	UPROPERTY(EditAnywhere, Category= "Interact Door Trigger Mass")
	float MassToOpenDoor;

	void CheckMassInOverlap();

	virtual bool ExecuteInteractInterface() override;
};
