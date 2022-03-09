// Copyright Theo Leyenda 2022


#include "QuestSystem/Objetive.h"

void UObjetive::CheckObjetiveComplete(FDataPlayer CompareData)
{
	bool bInventoryCondition = true;
		
	//FString Toto = FString::SanitizeFloat(0.5f) + FString("321");
	/*
	FString A = FString("");
	FString B = FString("");
	A.Append(B);
	A = A + B;
	 */
		
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
