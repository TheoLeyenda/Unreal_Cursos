// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestSystem/BaseTask.h"
#include "TaskActivatePlayerStatsUpdate.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UTaskActivatePlayerStatsUpdate : public UBaseTask
{
	GENERATED_BODY()
public:
	virtual void FindInformation() override;

	UFUNCTION()
	void SettingDataTask(ABuildingScapeCharacter* Value);
};
