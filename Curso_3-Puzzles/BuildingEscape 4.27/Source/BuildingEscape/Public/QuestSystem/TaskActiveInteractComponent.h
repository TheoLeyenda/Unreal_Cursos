// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "InteractComponent.h"
#include "QuestSystem/BaseTask.h"
#include "TaskActiveInteractComponent.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UTaskActiveInteractComponent : public UBaseTask
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere)
	TArray<UInteractComponent*> InteractComponents;

	virtual void FindInformation() override;

	UFUNCTION()
	void SettingDataTask(UInteractComponent* InteractComponent);
};
