// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "InteractTrigger.h"
#include "Door.h"
#include "DoorInteractTrigger.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API ADoorInteractTrigger : public AInteractTrigger
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, Category= "Interact Door Trigger")
	TArray<ADoor*> Doors;

	UPROPERTY(EditAnywhere, Category= "Interact Door Trigger")
	float TimeToCloseDoor;
	
	FTimerHandle TimerCloseDoor;
	
	virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp
		, class AActor* OtherActor
		, class UPrimitiveComponent* OtherComp
		, int32 OtherBodyIndex
		, bool bFromSweep
		, const FHitResult& SweepResult) override;

	virtual void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp
		, class AActor* OtherActor
		, class UPrimitiveComponent* OtherComp
		, int32 OtherBodyIndex) override;
	
	void CloseDoors();
	void OpenDoors();
	void CloseDoorByTimeToCloseDoor();

	virtual void BeginDestroy() override;
public:
	TArray<ADoor*> GetDoors();
private:
	bool bEnableClearTimer = false;
};
