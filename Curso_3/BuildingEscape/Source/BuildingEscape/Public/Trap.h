// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "TrapInterface.h"
#include "GameFramework/Actor.h"
#include "Trap.generated.h"

UCLASS()
class BUILDINGESCAPE_API ATrap : public AActor, public ITrapInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrap();

	UPROPERTY(EditAnywhere)
	UQuestActorComponentID* QuestActorComponentID;
	
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, meta = (ClampMin = 0.1f))
	float DelayRestartTrap = 1.0f;
	FTimerHandle TimerResetTrap;
	bool bEnableUseTrap = true;

	void SendDelayRestartTrap();
	
	virtual void ResetTrap();

	virtual bool ExecuteTrapInterface() override;
};
