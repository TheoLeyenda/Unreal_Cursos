// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Objetive.h"
#include "Engine/DataTable.h"
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

/*USTRUCT(BlueprintType)
struct FActionQuest
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bDoneAccion = false;

	UPROPERTY(EditAnywhere)
	bool bUseIdentificationObject = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataPlayer RequiredDataPlayer;
	
	void CheckObjetiveComplete(FDataPlayer CompareData)
	{
		bool bInventoryCondition = true;
		
		//FString Toto = FString::SanitizeFloat(0.5f) + FString("321");
		
		//FString A = FString("");
		//FString B = FString("");
		//A.Append(B);
		//A = A + B;
		 
		
		UE_LOG(LogTemp, Warning, TEXT("ACTUALICE ALIMENTO"));
		
		FString StringCompareData = FString("(") + FString::SanitizeFloat(CompareData.Fatness);
		FString StringRequiredDataPlayer =  FString::SanitizeFloat(RequiredDataPlayer.Fatness) + FString(")");
		
		RequiredDataPlayer.TextProgressFatness =  StringCompareData + FString("/") + StringRequiredDataPlayer;
		
		StringCompareData = FString("(") + FString::SanitizeFloat(CompareData.Lifes);
		StringRequiredDataPlayer =  FString::SanitizeFloat(RequiredDataPlayer.Lifes) + FString(")");

		RequiredDataPlayer.TextProgressLifes = StringCompareData + FString("/") + StringRequiredDataPlayer;
		
		if(RequiredDataPlayer.NeedItems.Num() > 0 && CompareData.InventoryComponent)
		{
			for(int i = 0; i < RequiredDataPlayer.NeedItems.Num(); i++)
			{
				bInventoryCondition = CompareData.InventoryComponent->CheckHaveItem(RequiredDataPlayer.NeedItems[i]);
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
	
};*/

USTRUCT(BlueprintType)
struct FQuestStructInfo : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TEnumAsByte<EQuestState> QuestState = EQuestState::Available;
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//TArray<FActionQuest> ActionsQuest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UObjetive*> Objetives;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> QuetsActivatedToCompleteIDs;
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

	void CheckCompleteQuest();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuestStructInfo QuestStructInfo;
	
	UFUNCTION()
	virtual void CheckStatus(FDataPlayer DataPlayer);
};
