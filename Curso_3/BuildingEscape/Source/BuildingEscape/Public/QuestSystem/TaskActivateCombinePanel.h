// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "CombinePanel.h"
#include "QuestSystem/BaseTask.h"
#include "TaskActivateCombinePanel.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UTaskActivateCombinePanel : public UBaseTask
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	TArray<ACombinePanel*> CombinePanels;
	
	virtual void FindInformation() override;

	UFUNCTION()
	void SettingDataTask(ACombinePanel* InteractTrigger);
};
