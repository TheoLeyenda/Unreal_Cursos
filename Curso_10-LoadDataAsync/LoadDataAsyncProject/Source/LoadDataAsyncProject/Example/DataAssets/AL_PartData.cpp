// Fill out your copyright notice in the Description page of Project Settings.

#include "LoadDataAsyncProject/Example/DataAssets/AL_PartData.h"
#include "LoadDataAsyncProject/Example/Core/Singelton/AL_GameInstance.h"
#include "LoadDataAsyncProject/Example/Parts/Skeletal/AL_SkeletalMeshComp.h"
#include "LoadDataAsyncProject/Example/Parts/Static/AL_StaticMeshComp.h"

void UAL_PartData::RequestAsyncLoad_SkeletalPart(const UObject* DataOwner)
{
	//once the array is filled get our asset loader to load our array
	if(auto* GameInstance = Cast<UAL_GameInstance>(DataOwner->GetWorld()->GetGameInstance()))
	{
		// Check if aviable parts has more than 0 indexes
		if(AvailableSkeletalParts.Num() > 0 && SkeletalPartsToFind.Num() > 0)
		{
			// create asset path list
			TArray<FSoftObjectPath> AssetsToLoad;
			
			// iterate over all incoming key names and then find the value of that key in our TMAP
			for(int i = 0; i < SkeletalPartsToFind.Num(); i++)
			{
				const ESkeletalPart PartName = SkeletalPartsToFind[i];

				//Add that found object to both path list & our objects arrays
				AssetsToLoad.AddUnique(AvailableSkeletalParts.Find(PartName)->ToSoftObjectPath());
				ObjectsToUnload.AddUnique(AvailableSkeletalParts.Find(PartName)->ToSoftObjectPath());
			}

			GameInstance->AssetLoader.RequestAsyncLoad(AssetsToLoad, FStreamableDelegate::CreateUObject(this, &UAL_PartData::OnSkeletalPartsLoaded));
		}
	}
}

void UAL_PartData::RequestAsyncLoad_StaticPart(const UObject* DataOwner)
{
	//once the array is filled get our asset loader to load our array
	if(auto* GameInstance = Cast<UAL_GameInstance>(DataOwner->GetWorld()->GetGameInstance()))
	{
		// Check if aviable parts has more than 0 indexes
		if(AvailableStaticParts.Num() > 0 && StaticPartsToFind.Num() > 0)
		{
			// create asset path list
			TArray<FSoftObjectPath> AssetsToLoad;
			
			// iterate over all incoming key names and then find the value of that key in our TMAP
			for(int i = 0; i < StaticPartsToFind.Num(); i++)
			{
				const EStaticPart PartName = StaticPartsToFind[i];

				//Add that found object to both path list & our objects arrays
				AssetsToLoad.AddUnique(AvailableStaticParts.Find(PartName)->ToSoftObjectPath());
				ObjectsToUnload.AddUnique(AvailableStaticParts.Find(PartName)->ToSoftObjectPath());
			}

			GameInstance->AssetLoader.RequestAsyncLoad(AssetsToLoad, FStreamableDelegate::CreateUObject(this, &UAL_PartData::OnStaticPartsLoaded));
		}
	}
}

void UAL_PartData::UnloadAllObjects(const UObject* DataOwner)
{
	// Get our game instance
	if(auto* GameInstance = Cast<UAL_GameInstance>(DataOwner->GetWorld()->GetGameInstance()))
	{
		// if game instance is valid or empty both of our arrays
		if(!GameInstance || ObjectsToUnload.Num() <= 0) return;
	
		//iterate over our ObjectsToUnload array
		FoundStaticParts.Empty();
		FoundSkeletalParts.Empty();

		for(int i = 0; i < ObjectsToUnload.Num(); i++)
		{
			//create a const temp variable to hold the name of the object @ the array index
			const FSoftObjectPath PathName = ObjectsToUnload[i];
			//Unload that object.
			GameInstance->AssetLoader.Unload(PathName);
		}
	}
}

TArray<UAL_SkeletalMeshComp*> UAL_PartData::GetAvialableSkeletalParts() const
{
	return FoundSkeletalParts;
}

TArray<UAL_StaticMeshComp*> UAL_PartData::GetAvialableStaticParts() const
{
	return FoundStaticParts;
}

void UAL_PartData::OnSkeletalPartsLoaded()
{
	//iterate over available skeletal parts and find the objects of the key name then add that object to our found part array
	for(int i = 0; i < SkeletalPartsToFind.Num(); i++)
	{
		const ESkeletalPart PartName = SkeletalPartsToFind[i];
		FoundSkeletalParts.AddUnique(AvailableSkeletalParts.Find(PartName)->Get()->GetDefaultObject<UAL_SkeletalMeshComp>());
	}
}

void UAL_PartData::OnStaticPartsLoaded()
{
	//iterate over available static parts and find the objects of the key name then add that object to our found part array
	for(int i = 0; i < StaticPartsToFind.Num(); i++)
	{
		const EStaticPart PartName = StaticPartsToFind[i];
		FoundStaticParts.AddUnique(AvailableStaticParts.Find(PartName)->Get()->GetDefaultObject<UAL_StaticMeshComp>());
	}
}
