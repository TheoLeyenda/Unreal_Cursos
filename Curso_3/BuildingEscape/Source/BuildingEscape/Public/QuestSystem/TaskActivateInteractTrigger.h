// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "InteractTrigger.h"
#include "QuestSystem/Task.h"
#include "TaskActivateInteractTrigger.generated.h"

/**
 * 
 */

UCLASS()
class BUILDINGESCAPE_API ATaskActivateInteractTrigger : public ATask
{
	GENERATED_BODY()

public:
	
	TArray<AInteractTrigger*> InteractTriggers;
	
	virtual void FindInformation() override;

	UFUNCTION()
	void SettingDataTask(AInteractTrigger* InteractTrigger);
};
