// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "DetectDestroyActorComponent.h"
#include "QuestSystem/BaseTask.h"
#include "TaskDestroyActor.generated.h"

/**
 * 
 */
UCLASS()
class BUILDINGESCAPE_API UTaskDestroyActor : public UBaseTask
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere)
	TArray<UDetectDestroyActorComponent*> DetectDestroyActorComponents;

	virtual void FindInformation() override;

	UFUNCTION()
	void SettingDataTask(TSubclassOf<AActor> ActorDestroyed, int32 ID);
};
