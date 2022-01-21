// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.h"
#include "InteractDoorTrigger.generated.h"

UCLASS()
class BUILDINGESCAPE_API AInteractDoorTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractDoorTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//BoxComponent which will be used as our proximity volume.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Interact Door Trigger")
	class UBoxComponent* BoxTriggerVolume;

	UPROPERTY(EditAnywhere, Category= "Interact Door Trigger")
	TArray<ADoor*> Doors;

	UPROPERTY(EditAnywhere, Category= "Interact Door Trigger")
	float TimeToCloseDoor;
	
	FTimerHandle TimerCloseDoor;
	
	UFUNCTION()
	virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp
		, class AActor* OtherActor
		, class UPrimitiveComponent* OtherComp
		, int32 OtherBodyIndex
		, bool bFromSweep
		, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp
		, class AActor* OtherActor
		, class UPrimitiveComponent* OtherComp
		, int32 OtherBodyIndex);

	void CloseDoors();
	void OpenDoors();
	void CloseDoorByTimeToCloseDoor();

	void BeginDestroy() override;
private:
	bool enableClearTimer = false;
};

