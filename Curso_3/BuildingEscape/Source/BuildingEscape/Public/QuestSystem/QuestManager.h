// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "BaseQuest.h"
#include "GameFramework/Actor.h"
#include "QuestManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinishAllQuest);

USTRUCT(BlueprintType)
struct FQuestInfo
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBaseQuest* Quest;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString NameRowReadDataQuest;
	UPROPERTY(VisibleAnywhere)
	bool bCheckedDone = false;
};

UCLASS()
class BUILDINGESCAPE_API AQuestManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AQuestManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FQuestInfo> QuestsInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* DataTable;
	
	UPROPERTY(VisibleAnywhere)
	TArray<UQuestEvaluatorComponent*> QuestEvaluatorComponents;
	//TArray de UQuestEvaluatorComponent
	
	FOnFinishAllQuest OnFinishAllQuest;

	UFUNCTION()
	void FindQuestEvaluatorComponents();

	UFUNCTION()
	void ChangeStateQuest(int IdQuest, EQuestState NewQuestState);
	
	void ChangeStateQuest(UBaseQuest* Quest, EQuestState NewQuestState);

	void ChangeStateQuests(TArray<int> IdsQuest, EQuestState NewQuestState);
	
	UFUNCTION()
	void CheckQuests(UQuestEvaluatorComponent* QuestEvaluatorComponent);

	UFUNCTION()
	void SendEventFinishAllQuest();

	UFUNCTION()
	void LoadQuestsInfoDataTable();

};
