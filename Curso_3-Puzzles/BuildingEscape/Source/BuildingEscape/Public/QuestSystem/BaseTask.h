// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StructsDataSystemQuest.h"
#include "BaseTask.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateTask,FDataPlayer, DataPlayer, bool, bForceSend);

UCLASS(DefaultToInstanced, EditInlineNew, BlueprintType, Blueprintable)
class BUILDINGESCAPE_API UBaseTask : public UObject
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	UBaseTask();
	
	UPROPERTY(VisibleAnywhere)
	class ABuildingScapeCharacter* BuildingScapeCharacter;

	UPROPERTY(VisibleAnywhere)
	FDataPlayer SendDataPlayer;
	
	FOnUpdateTask OnUpdateTask;

	UFUNCTION()
	void SendEventUpdateTask(bool bForceSend);

	UFUNCTION()
	virtual void FindInformation();

	UFUNCTION()
	void SettingDataBaseTask(bool SendEvent);
};
