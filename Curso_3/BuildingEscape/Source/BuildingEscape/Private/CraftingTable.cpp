// Copyright Theo Leyenda 2022


#include "CraftingTable.h"

#include <string>

#include "Algo/Compare.h"

ACraftingTable::ACraftingTable()
{
	PrimaryActorTick.bCanEverTick = true;
	
	for(int i = 0; i < CountSlots; i++)
	{
		MatrixActorsPlaceInfo.Add(FMatrixActorsPlace());
	}

	for(int i = 0; i < MatrixActorsPlaceInfo.Num(); i++)
	{
		MatrixActorsPlaceInfo[i].ActorsPlace.indexPlace = i;
		MatrixActorsPlaceInfo[i].ActorsPlace.CurrentActorPlace = nullptr;
	}
}

void ACraftingTable::BeginPlay()
{
	Super::BeginPlay();
}

void ACraftingTable::CheckCrafting()
{
	ComparePlaceActorsInfo.Empty();
	for(int i = 0; i < MatrixActorsPlaceInfo.Num(); i++)
	{
		MatrixActorsPlaceInfo[i].CheckCurrentActorPlace();
	}
	for(int i = 0; i < MatrixActorsPlaceInfo.Num(); i++)
	{
		if(MatrixActorsPlaceInfo[i].ActorsPlace.CurrentActorPlace)
		{
			ComparePlaceActorsInfo.Add(FActorsPlaceInfo());
			ComparePlaceActorsInfo[ComparePlaceActorsInfo.Num() - 1].indexPlace = MatrixActorsPlaceInfo[i].ActorsPlace.indexPlace;
			ComparePlaceActorsInfo[ComparePlaceActorsInfo.Num() - 1].CurrentActorPlace = MatrixActorsPlaceInfo[i].ActorsPlace.CurrentActorPlace;
		}
	}
	bool bCraftingDone = true;
	bool bFindCrafting = false;
	int indexCraftingInfoSpawnObject = 0;

	if(ComparePlaceActorsInfo.Num() <= 0)
	{
		bCraftingDone = false;
	}
	else
	{
		for(int i = 0; i < CraftingInfo.Num(); i++)
		{
			bCraftingDone = true;
			if(ComparePlaceActorsInfo.Num() == CraftingInfo[i].ActorsRequired.Num())
			{
				for(int k = 0; k < ComparePlaceActorsInfo.Num(); k++)
				{
					if(ComparePlaceActorsInfo[k].indexPlace != CraftingInfo[i].ActorsRequired[k].indexPlace
						|| ComparePlaceActorsInfo[k].CurrentActorPlace->GetClass() != CraftingInfo[i].ActorsRequired[k].ActorPlaceRequired)
					{
						bCraftingDone = false;
					}
				}
				if(bCraftingDone)
				{
					bFindCrafting = true;
					UE_LOG(LogTemp, Warning, TEXT("CRAFTIE ALGO"));
					indexCraftingInfoSpawnObject = i;
					i = CraftingInfo.Num();
				}
			}
			
		}
	}

	
	if(bCraftingDone && ObjectSpawner && bFindCrafting)
	{
		ObjectSpawner->ObjectsSpawn.Empty();
		ObjectSpawner->ObjectsSpawn.Add(FObjectSpawn());
		int Index = ObjectSpawner->ObjectsSpawn.Num()-1;
		ObjectSpawner->ObjectsSpawn[Index].ObjectBlueprint = CraftingInfo[indexCraftingInfoSpawnObject].CraftingActorSpawn;
		ObjectSpawner->ObjectsSpawn[Index].CountObjectsSpawn = CraftingInfo[indexCraftingInfoSpawnObject].CountActorsSpawns;
		ObjectSpawner->SendTimerSpawnObject();

		for(int i = 0; i < ComparePlaceActorsInfo.Num(); i++)
		{
			ComparePlaceActorsInfo[i].CurrentActorPlace->Destroy();
		}
	}
}




