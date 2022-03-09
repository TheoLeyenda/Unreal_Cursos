// Copyright Theo Leyenda 2022


#include "QuestSystem/BaseQuest.h"

void UBaseQuest::CheckCompleteQuest()
{
	if(QuestStructInfo.QuestState != EQuestState::InProgress){return;}
	
	bool bCompleteQuest = true;
	
	for(UObjetive* Objetive : QuestStructInfo.Objetives)
	{
		if(Objetive)
		{
			if(!Objetive->bDoneAccion)
			{
				bCompleteQuest = false;
				break;
			}
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
	for(UObjetive* Objetive : QuestStructInfo.Objetives)
	{
		if(Objetive)
		{
			if(!Objetive->bDoneAccion)
			{
				Objetive->CheckObjetiveComplete(DataPlayer);
				if(Objetive->bDoneAccion)
				{
					OnUpdateQuest.Broadcast();
				}
				UE_LOG(LogTemp, Warning, TEXT("Objetivo Completado: %s"), Objetive->bDoneAccion? TEXT("True") : TEXT("False"));
			}
		}
	}
	CheckCompleteQuest();
	OnUpdateQuest.Broadcast();
}
