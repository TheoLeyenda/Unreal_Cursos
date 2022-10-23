// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "InteractTrigger.h"
#include "QuestSystem/BaseTask.h"
#include "TaskActivateInteractTrigger.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UTaskActivateInteractTrigger : public UBaseTask
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere)
	TArray<AInteractTrigger*> InteractTriggers;
	
	virtual void FindInformation() override;

	UFUNCTION()
	void SettingDataTask(AInteractTrigger* InteractTrigger);
};
