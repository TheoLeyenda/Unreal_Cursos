// Copyright Theo Leyenda 2022


#include "QuestSystem/BaseQuest.h"

void UBaseQuest::CheckCompleteQuest()
{
	if(QuestStructInfo.QuestState != EQuestState::InProgress){return;}
	
	bool bCompleteQuest = true;
	
	for(FActionQuest &ActionQuest : QuestStructInfo.ActionsQuest)
	{
		if(!ActionQuest.bDoneAccion)
		{
			bCompleteQuest = false;
			break;
		}
	}

	if(bCompleteQuest)
	{
		UE_LOG(LogTemp, Warning, TEXT("Quest Completada"));
		QuestStructInfo.QuestState = EQuestState::Completed;
		OnFinishQuest.Broadcast(this);
	}
}

void UBaseQuest::CheckStatus(FDataPlayer DataPlayer)
{
	if(QuestStructInfo.QuestState != EQuestState::InProgress){return;}
	for(FActionQuest &ActionQuest : QuestStructInfo.ActionsQuest)
	{
		if(!ActionQuest.bDoneAccion)
		{
			ActionQuest.CheckObjetiveComplete(DataPlayer);
			if(ActionQuest.bDoneAccion)
			{
				OnUpdateQuest.Broadcast();
			}
			UE_LOG(LogTemp, Warning, TEXT("Objetivo Completado: %s"), ActionQuest.bDoneAccion? TEXT("True") : TEXT("False"));
		}
	}
	CheckCompleteQuest();
	OnUpdateQuest.Broadcast();
}
