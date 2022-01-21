// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "InteractDoorTrigger.h"
#include "InteractDoorTriggerActor.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API AInteractDoorTriggerActor : public AInteractDoorTrigger
{
	GENERATED_BODY()
public:
	AInteractDoorTriggerActor();
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
};

