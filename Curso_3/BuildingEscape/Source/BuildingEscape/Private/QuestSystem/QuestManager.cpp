// Copyright Theo Leyenda 2022


#include "QuestSystem/QuestManager.h"
#include "Kismet/GameplayStatics.h"

AQuestManager::AQuestManager()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AQuestManager::BeginPlay()
{
	Super::BeginPlay();
	FindQuestEvaluatorComponents();

	LoadQuestsInfoDataTable();
}

void AQuestManager::LoadQuestsInfoDataTable()
{
	QuestsInfo.Empty();
	for(int i = 0; i < DataTable->GetRowNames().Num(); i++)
	{
		QuestsInfo.Add(FQuestInfo());
		QuestsInfo[i].NameRowReadDataQuest = DataTable->GetRowNames()[i].ToString();
	}
	
	for(FQuestInfo &QuestInfo : QuestsInfo)
	{
		FString Context = "Power Rager Verde";
		
		FQuestStructInfo* CurrentQuestStructInfo = DataTable->FindRow<FQuestStructInfo>(FName(QuestInfo.NameRowReadDataQuest),Context);

		QuestInfo.Quest = NewObject<UBaseQuest>();

		if(QuestInfo.Quest != nullptr)
		{
			QuestInfo.Quest->QuestStructInfo.Name = CurrentQuestStructInfo->Name;

			QuestInfo.Quest->QuestStructInfo.Objetives.Empty();
			for(UObjetive* Objetive : CurrentQuestStructInfo->Objetives)
			{
				if(Objetive)
				{
					Objetive->ResetData();
					QuestInfo.Quest->QuestStructInfo.Objetives.Add(Objetive);
				}
			}

			QuestInfo.Quest->QuestStructInfo.ID = CurrentQuestStructInfo->ID;
			QuestInfo.Quest->QuestStructInfo.QuestState = CurrentQuestStructInfo->QuestState;
			QuestInfo.Quest->QuestStructInfo.QuetsActivatedToCompleteIDs = CurrentQuestStructInfo->QuetsActivatedToCompleteIDs;
		}
	}
}

void AQuestManager::FindQuestEvaluatorComponents()
{
	TArray<AActor*> Actors;

	QuestEvaluatorComponents.Empty();
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABuildingScapeCharacter::StaticClass(),Actors);

	if(Actors.Num() > 0)
	{
		for(AActor* Actor : Actors)
		{
			if(Actor)
			{
				UQuestEvaluatorComponent* QuestEvaluatorComponent = Cast<UQuestEvaluatorComponent>(Actor->GetComponentByClass(UQuestEvaluatorComponent::StaticClass()));
				if(QuestEvaluatorComponent)
				{
					QuestEvaluatorComponent->OnQuestEvaluatorDataUpdate.AddDynamic(this, &AQuestManager::CheckQuests);
					QuestEvaluatorComponents.Add(QuestEvaluatorComponent);
				}
			}
		}
	}
}

void AQuestManager::ChangeStateQuest(int IdQuest, EQuestState NewQuestState)
{
	for(FQuestInfo &QuestInfo : QuestsInfo)
	{
		if(QuestInfo.Quest->QuestStructInfo.ID == IdQuest)
		{
			QuestInfo.Quest->QuestStructInfo.QuestState = NewQuestState;
		}
	}
}

void AQuestManager::ChangeStateQuest(UBaseQuest* Quest, EQuestState NewQuestState)
{
	for(FQuestInfo &AuxQuestInfo : QuestsInfo)
	{
		if(Quest)
		{
			if(AuxQuestInfo.Quest == Quest)
			{
				AuxQuestInfo.Quest->QuestStructInfo.QuestState = NewQuestState;
				break;
			}
		}
	}
}

void AQuestManager::ChangeStateQuests(TArray<int> IdsQuest, EQuestState NewQuestState)
{
	for(int i = 0; i < IdsQuest.Num(); i++)
	{
		ChangeStateQuest(IdsQuest[i], NewQuestState);
	}
}

void AQuestManager::CheckQuests(UQuestEvaluatorComponent* QuestEvaluatorComponent, bool bForceSend)
{
	for(FQuestInfo &AuxQuestInfo : QuestsInfo)
	{
		if(AuxQuestInfo.Quest->QuestStructInfo.QuestState == EQuestState::InProgress || bForceSend)
		{
			//UE_LOG(LogTemp, Warning, TEXT("LLEGUE A CHECK STATUS"));
			AuxQuestInfo.Quest->CheckStatus(QuestEvaluatorComponent->DataPlayer, bForceSend);
			if(AuxQuestInfo.Quest->QuestStructInfo.QuestState == EQuestState::Completed && !AuxQuestInfo.bCheckedDone)
			{
				//UE_LOG(LogTemp, Warning, TEXT("LE HICE UN DONE A LA ACCION"));
				ChangeStateQuests(AuxQuestInfo.Quest->QuestStructInfo.QuetsActivatedToCompleteIDs, EQuestState::InProgress);
				AuxQuestInfo.bCheckedDone = true;
			}
		}
	}

	bool bSendEventFinishAllQuest = true;
	
	for(FQuestInfo &AuxQuestInfo : QuestsInfo)
	{
		if(AuxQuestInfo.Quest->QuestStructInfo.QuestState != EQuestState::Completed)
		{
			bSendEventFinishAllQuest = false;
		}
	}
	
	if(bSendEventFinishAllQuest)
	{
		SendEventFinishAllQuest();
	}
}

void AQuestManager::SendEventFinishAllQuest()
{
	//UE_LOG(LogTemp, Warning, TEXT("Todos las Quest completadas"));
	OnFinishAllQuest.Broadcast();
}


