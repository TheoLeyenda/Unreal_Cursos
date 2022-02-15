// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractInterface.h"
#include "QuestSystem/QuestActorComponentID.h"
#include "Components/TimelineComponent.h"
#include "Components/AudioComponent.h"
#include "Door.generated.h"


UENUM()
enum class EStateDoor
{
	Closed,
	Opened,
};

UCLASS()
class BUILDINGESCAPE_API ADoor : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

protected:
	
	UPROPERTY(EditAnywhere)
	UQuestActorComponentID* QuestActorComponentID;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
 
	UPROPERTY(EditAnywhere, Category= "Door Settings")
	EStateDoor StateDoor;

	EStateDoor OpenOrClose;
	
	UPROPERTY(EditAnywhere, Category= "Door Settings")
	bool bUseInitCheckDoor;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* DoorFrame;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Door;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UTimelineComponent* DoorTimelineComp;

	UPROPERTY()
	UAudioComponent* AudioComponent = nullptr;
	
	bool bOpenDoorSound = false;
	bool bCloseDoorSound = true;
	void CheckCloseDoorSound();
	void CheckOpenDoorSound();

	virtual bool ExecuteInteractInterface(ABuildingScapeCharacter* Character) override;
	
public:	
	
	void SetStateDoor(EStateDoor Value);
	EStateDoor GetStateDoor();
	void CheckDoor();
	void OpenDoor();
	void CloseDoor();
	// Variable to hold the Curve asset
	UPROPERTY(EditAnywhere, Category= "Door Settings")
	UCurveFloat* DoorTimelineFloatCurve;

	void FindAuidioComponent();
private:
	FOnTimelineFloat UpdateFunctionFloat;
	
	UFUNCTION()
	void UpdateTimelineComp(float Output);
};
