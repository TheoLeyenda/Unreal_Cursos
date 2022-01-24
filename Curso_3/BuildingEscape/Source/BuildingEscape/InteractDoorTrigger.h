// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Door.h"
#include "StrategyInteract.h"
#include "InteractDoorTrigger.generated.h"

UENUM()
enum class ELastStateObjectOverlap
{
	BeginOverlap,
	EndOverlap,
};

UCLASS()
class BUILDINGESCAPE_API AInteractDoorTrigger : public AActor, public IStrategyInteract
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
	UBoxComponent* BoxTriggerVolume;

	UPROPERTY(EditAnywhere, Category= "Interact Door Trigger")
	TArray<ADoor*> Doors;

	UPROPERTY(EditAnywhere, Category= "Interact Door Trigger")
	float TimeToCloseDoor;
	
	FTimerHandle TimerCloseDoor;

	ELastStateObjectOverlap LastObjectRegister;
	
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

	virtual bool ExecuteStrategyInteract() override;
private:
	bool enableClearTimer = false;
};

