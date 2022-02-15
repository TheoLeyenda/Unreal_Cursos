// Copyright Theo Leyenda 2022


#include "QuestSystem/BaseQuest.h"

void UBaseQuest::CheckCompleteQuest()
{
	if(QuestState != EQuestState::InProgress){return;}
	
	bool bCompleteQuest = true;
	
	for(FActionQuest &ActionQuest : ActionsQuest)
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
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Quest Completada"));
		QuestState = EQuestState::Completed;
		OnFinishQuest.Broadcast(this);
	}
}

void UBaseQuest::CheckStatus(FDataPlayer DataPlayer)
{
	if(QuestState != EQuestState::InProgress){return;}
	for(FActionQuest &ActionQuest : ActionsQuest)
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
}
