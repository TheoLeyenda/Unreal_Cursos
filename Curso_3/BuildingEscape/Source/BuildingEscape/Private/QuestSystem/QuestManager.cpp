// Copyright Theo Leyenda 2022


#include "QuestSystem/QuestManager.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AQuestManager::AQuestManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AQuestManager::BeginPlay()
{
	Super::BeginPlay();
	FindQuestEvaluatorComponents();
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

void AQuestManager::ChangeStateQuest(int indexQuest, EQuestState NewQuestState)
{
	if(indexQuest >= QuestsInfo.Num() || indexQuest < 0){return;}

	QuestsInfo[indexQuest].Quest->QuestState = NewQuestState;
}

void AQuestManager::ChangeStateQuest(AQuest* Quest, EQuestState NewQuestState)
{
	for(FQuestInfo &AuxQuestInfo : QuestsInfo)
	{
		if(Quest)
		{
			if(AuxQuestInfo.Quest == Quest)
			{
				AuxQuestInfo.Quest->QuestState = NewQuestState;
				break;
			}
		}
	}
}

void AQuestManager::ChangeStateQuests(TArray<int> indexQuests, EQuestState NewQuestState)
{
	if(indexQuests.Num() < 0 || indexQuests.Num() >= QuestsInfo.Num()) {return;}
	for(int i = 0; i < indexQuests.Num(); i++)
	{
		QuestsInfo[indexQuests[i]].Quest->QuestState = NewQuestState;
	}
}

void AQuestManager::CheckQuests(UQuestEvaluatorComponent* QuestEvaluatorComponent)
{
	for(FQuestInfo &AuxQuestInfo : QuestsInfo)
	{
		if(AuxQuestInfo.Quest->QuestState == EQuestState::InProgress)
		{
			AuxQuestInfo.Quest->CheckStatus(QuestEvaluatorComponent->DataPlayer);
			if(AuxQuestInfo.Quest->QuestState == EQuestState::Completed && !AuxQuestInfo.bCheckedDone)
			{
				ChangeStateQuests(AuxQuestInfo.QuetsActivatedIDs, EQuestState::InProgress);
				AuxQuestInfo.bCheckedDone = true;
			}
		}
	}

	bool bSendEventFinishAllQuest = true;
	for(FQuestInfo &AuxQuestInfo : QuestsInfo)
	{
		if(AuxQuestInfo.Quest->QuestState != EQuestState::Completed)
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
	UE_LOG(LogTemp, Warning, TEXT("Todos las Quest completadas"));
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Todos las Quest completadas"));
	OnFinishAllQuest.Broadcast();
}


