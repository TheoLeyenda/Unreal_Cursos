// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "DoorInteractTrigger.h"
#include "DoorInteractTriggerWithActors.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ADoorInteractTriggerWithActors : public ADoorInteractTrigger
{
	GENERATED_BODY()
public:
	ADoorInteractTriggerWithActors();
protected:
	
	UPROPERTY(EditAnywhere, Category = "Interact Door Trigger Actor")
	TArray<TSubclassOf<AActor>> ActorsTriggerClass;

	TArray<AActor*> ActorsInOverlap;
	
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

	virtual bool ExecuteInteractInterface() override;
};
