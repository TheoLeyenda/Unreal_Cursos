// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "InteractDoorTrigger.h"
#include "InteractDoorTriggerMass.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API AInteractDoorTriggerMass : public AInteractDoorTrigger
{
	GENERATED_BODY()

public:
	AInteractDoorTriggerMass();

	float TotalMassActors();
	
	
protected:

	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp
		, AActor* OtherActor
		, UPrimitiveComponent* OtherComp
		, int32 OtherBodyIndex
		, bool bFromSweep
		, const FHitResult& SweepResult) override;

	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComp
		, AActor* OtherActor
		, UPrimitiveComponent* OtherComp
		, int32 OtherBodyIndex) override;
	
	UPROPERTY(EditAnywhere, Category= "Interact Door Trigger Mass")
	float MassToOpenDoor;

	void CheckMassInOverlap();

	virtual bool ExecuteStrategyInteract() override;
};
