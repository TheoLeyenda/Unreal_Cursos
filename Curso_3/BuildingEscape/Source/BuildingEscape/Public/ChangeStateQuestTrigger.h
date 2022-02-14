// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestSystem/QuestManager.h"
#include "ObjectsInteractTrigger.h"
#include "ChangeStateQuestTrigger.generated.h"

/**
 * 
 */

UENUM()
enum class ETypeSetStateQuest
{
	QuestID,
	QuestPointer,
};

USTRUCT()
struct FChangeStateQuestInfo
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	ETypeSetStateQuest TypeSetStateQuest;
	
	UPROPERTY(EditAnywhere)
	TEnumAsByte<EQuestState> NewQuestState;

	UPROPERTY(EditAnywhere)
	int QuestID;

	UPROPERTY(EditAnywhere)
	AQuest* Quest;
};

UCLASS()
class BUILDINGESCAPE_API AChangeStateQuestTrigger : public AObjectsInteractTrigger
{
	GENERATED_BODY()

protected:
	
	UPROPERTY(EditAnywhere)
	AQuestManager* QuestManager;

	UPROPERTY(EditAnywhere)
	TArray<FChangeStateQuestInfo> ChangeStateQuestsInfo;
	
	void ChangeStateQuest();
	
	virtual bool ExecuteInteractInterface(AActor* OtherActor) override;
};
