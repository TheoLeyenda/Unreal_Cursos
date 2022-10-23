// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "TimerInterface.h"
#include "Components/ActorComponent.h"
#include "TimeEventOver.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UTimeEventOver : public UActorComponent, public ITimerInterface
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTimeEventOver();

protected:
	UPROPERTY(EditAnywhere)
	float DelayToEvent;
	FTimerHandle TimerToEvent;
	
	virtual void BeginPlay() override;

	virtual bool ExecuteFinishTimeEvent() override;

	void CallFinishTimeEvent();	
};
