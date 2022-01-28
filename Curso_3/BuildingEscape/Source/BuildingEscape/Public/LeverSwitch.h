// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"
#include "InteractInterface.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "LeverSwitch.generated.h"

UENUM()
enum class EPositiveShiwtch
{
	Up,
	Down,
};

UCLASS()
class BUILDINGESCAPE_API ALeverSwitch : public AActor, public IInteractInterface
{
	GENERATED_BODY()
protected:
	bool bFlagInitSound = true;
public:	
	// Sets default values for this actor's properties
	ALeverSwitch();

	virtual void BeginPlay() override;
	
	bool bSwitchOn;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UTimelineComponent* TimelineComp;

	UPROPERTY(EditAnywhere)
	UCurveFloat* TimelineFloatCurve;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshBase;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshLever;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UBoxComponent* BoxComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent* Scene;
	
	void Switch();

	virtual bool ExecuteInteractInterface(ABuildingScapeCharacter* Character) override;
	
	UPROPERTY(EditAnywhere)
	EPositiveShiwtch PositiveShiwtch = EPositiveShiwtch::Up;
	
	void UpSwitch();
	void DownSwitch();
	
	UPROPERTY(EditAnywhere)
	UAudioComponent* AudioComponent = nullptr;
	
	void SwitchSound();
	
	void FindAuidioComponent();
private:
	//Float Track Signature to handle our update track event
	FOnTimelineFloat UpdateFunctionFloat;

	//Function which updates our Door's relative location with the timeline graph
	UFUNCTION()
	void UpdateTimelineComp(float Output);
	
	
};
