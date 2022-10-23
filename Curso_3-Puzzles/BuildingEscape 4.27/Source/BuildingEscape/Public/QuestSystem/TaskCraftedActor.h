// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "CraftingTable.h"
#include "QuestSystem/BaseTask.h"
#include "TaskCraftedActor.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UTaskCraftedActor : public UBaseTask
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere)
	TArray<ACraftingTable*> CraftingTables;

	virtual void FindInformation() override;

	UFUNCTION()
	void SettingDataTask(TSubclassOf<AActor> ActorClass, ACraftingTable* CraftingTable);
};
