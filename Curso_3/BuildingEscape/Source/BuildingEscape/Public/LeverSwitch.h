// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"
#include "LeverSwitch.generated.h"

UENUM()
enum class EPositiveShiwtch
{
	Up,
	Down,
};

UCLASS()
class BUILDINGESCAPE_API ALeverSwitch : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALeverSwitch();

	virtual void BeginPlay() override;
	
	bool SwitchOn;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UTimelineComponent* TimelineComp;

	UPROPERTY(EditAnywhere)
	UCurveFloat* TimelineFloatCurve;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshBase;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshLever;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent* Scene;
	
	void Switch();

	UPROPERTY(EditAnywhere)
	EPositiveShiwtch PositiveShiwtch = EPositiveShiwtch::Up;
	
	void UpSwitch();
	void DownSwitch();

	
	UPROPERTY()
	UAudioComponent* AudioComponent = nullptr;

	bool bUpSwitchSound = false;
	bool bDownSwitchSound = true;
	void CheckDownSwitchSound();
	void CheckUpSwitchSound();

	void FindAuidioComponent();
private:
	//Float Track Signature to handle our update track event
	FOnTimelineFloat UpdateFunctionFloat;

	//Function which updates our Door's relative location with the timeline graph
	UFUNCTION()
	void UpdateTimelineComp(float Output);

	
};
