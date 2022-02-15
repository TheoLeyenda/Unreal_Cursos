// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestEvaluatorComponent.h"
#include "UObject/Object.h"
#include "BaseQuest.generated.h"

UENUM(BlueprintType)
enum EQuestState
{
	Available,
	InProgress,
	Cancelled,
	Completed,
	Failed,
};

USTRUCT(BlueprintType)
struct FActionQuest
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bDoneAccion = false;

	UPROPERTY(EditAnywhere)
	bool bUseIdentificationObject = true;
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//int ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataPlayer RequiredDataPlayer;
	
	void CheckObjetiveComplete(FDataPlayer CompareData)
	{

		bool bInventoryCondition = true;
		//UE_LOG(LogTemp, Warning, TEXT("Cantidad de items: %d"), RequiredDataPlayer.NeedItems.Num());
		//UE_LOG(LogTemp, Warning, TEXT("InventoryComponent es %s"), CompareData.InventoryComponent ? TEXT("TRUE") : TEXT("FALSE"));
		if(RequiredDataPlayer.NeedItems.Num() > 0 && CompareData.InventoryComponent)
		{
			for(int i = 0; i < RequiredDataPlayer.NeedItems.Num(); i++)
			{
				bInventoryCondition = CompareData.InventoryComponent->CheckHaveItem(RequiredDataPlayer.NeedItems[i]->GetClass());
				//UE_LOG(LogTemp, Warning, TEXT("bInventoryCondition es %s"), bInventoryCondition ? TEXT("TRUE") : TEXT("FALSE"));
			}
		}

		bool bIdentificationObject = (CompareData.LastInteractActorInfo.ID == RequiredDataPlayer.LastInteractActorInfo.ID 
			&& CompareData.LastInteractActorInfo.ActorBlueprint == RequiredDataPlayer.LastInteractActorInfo.ActorBlueprint) || !bUseIdentificationObject;

		
		if(CompareData.Fatness >= RequiredDataPlayer.Fatness
			&& CompareData.Lifes >= RequiredDataPlayer.Lifes
			&& bIdentificationObject
			&& bInventoryCondition)
		{
			bDoneAccion = true;
		}
	}
	
};

UCLASS(DefaultToInstanced, EditInlineNew, BlueprintType, Blueprintable)
class BUILDINGESCAPE_API UBaseQuest : public UObject
{
	GENERATED_BODY()
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishQuest, UBaseQuest*, Quest);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdateQuest);
public:
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnFinishQuest OnFinishQuest;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnUpdateQuest OnUpdateQuest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TEnumAsByte<EQuestState> QuestState = EQuestState::Available;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FActionQuest> ActionsQuest;

	void CheckCompleteQuest();

	UFUNCTION()
	virtual void CheckStatus(FDataPlayer DataPlayer);
};
