// Copyright Theo Leyenda 2022


#include "ChangeStateQuestTrigger.h"

void AChangeStateQuestTrigger::ChangeStateQuest()
{
	for(FChangeStateQuestInfo ChangeStateQuestInfo : ChangeStateQuestsInfo)
	{
		if(ChangeStateQuestInfo.TypeSetStateQuest == ETypeSetStateQuest::QuestID)
		{
			QuestManager->ChangeStateQuest(ChangeStateQuestInfo.QuestID, ChangeStateQuestInfo.NewQuestState);
		}
		else if(ChangeStateQuestInfo.TypeSetStateQuest == ETypeSetStateQuest::QuestPointer)
		{
			QuestManager->ChangeStateQuest(ChangeStateQuestInfo.Quest, ChangeStateQuestInfo.NewQuestState);
		}
	}
}

bool AChangeStateQuestTrigger::ExecuteInteractInterface(AActor* OtherActor)
{
	bool Value = Super::ExecuteInteractInterface(OtherActor);
	
	ChangeStateQuest();

	if(bDestroyMeOnTrigger)
	{
		UE_LOG(LogTemp, Warning, TEXT("ME DESTRUI"));
		Destroy();
	}
	
	return Value;
}
