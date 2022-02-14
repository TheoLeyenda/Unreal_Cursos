// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Quest.h"
#include "GameFramework/Actor.h"
#include "QuestManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinishAllQuest);

USTRUCT(BlueprintType)
struct FQuestInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AQuest* Quest;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> QuetsActivatedIDs;
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FQuestInfo> QuestsInfo;

	UPROPERTY(VisibleAnywhere)
	TArray<UQuestEvaluatorComponent*> QuestEvaluatorComponents;
	//TArray de UQuestEvaluatorComponent
	
	FOnFinishAllQuest OnFinishAllQuest;

	UFUNCTION()
	void FindQuestEvaluatorComponents();

	UFUNCTION()
	void ChangeStateQuest(int indexQuest, EQuestState NewQuestState);
	
	void ChangeStateQuest(AQuest* Quest, EQuestState NewQuestState);

	void ChangeStateQuests(TArray<int> indexQuests, EQuestState NewQuestState);
	
	UFUNCTION()
	void CheckQuests(UQuestEvaluatorComponent* QuestEvaluatorComponent);

	UFUNCTION()
	void SendEventFinishAllQuest();
};
