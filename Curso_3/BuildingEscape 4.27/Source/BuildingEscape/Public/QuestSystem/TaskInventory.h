// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestSystem/BaseTask.h"
#include "TaskInventory.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UTaskInventory : public UBaseTask
{
	UPROPERTY(VisibleAnywhere)
	TArray<UInventory*> Inventarys;
	
	GENERATED_BODY()
	virtual void FindInformation() override;
	
	UFUNCTION()
	void SettingDataTask(UInventory* Inventory);
};
