// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "Components/AudioComponent.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

UENUM()
enum class EStateDoor
{
	Closed,
	Opened,
};

UCLASS()
class BUILDINGESCAPE_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
 
	UPROPERTY(EditAnywhere, Category= "Door Settings")
	EStateDoor StateDoor;

	EStateDoor OpenOrClose;
	
	UPROPERTY(EditAnywhere, Category= "Door Settings")
	bool bUseInitCheckDoor;
	
	void OpenDoor();
	void CloseDoor();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* DoorFrame;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Door;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UTimelineComponent* DoorTimelineComp;

	UPROPERTY()
	UAudioComponent* AudioComponent = nullptr;
	
	bool bOpenDoorSound = false;
	bool bCloseDoorSound = true;
	void CheckCloseDoorSound();
	void CheckOpenDoorSound();
	
public:	

	void SetStateDoor(EStateDoor Value);
	void CheckDoor();

	// Variable to hold the Curve asset
	UPROPERTY(EditAnywhere, Category= "Door Settings")
	UCurveFloat* DoorTimelineFloatCurve;

	void FindAuidioComponent();
	
private:
	//Float Track Signature to handle our update track event
	FOnTimelineFloat UpdateFunctionFloat;

	//Function which updates our Door's relative location with the timeline graph
	UFUNCTION()
	void UpdateTimelineComp(float Output);
};
