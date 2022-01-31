// Copyright Theo Leyenda 2022


#include "CraftingTable.h"

#include <Actor.h>

#include "Algo/Compare.h"
#include "Algo/Count.h"

// Sets default values
ACraftingTable::ACraftingTable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
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
	// HACER UNA PALANCA QUE LLAME A ESTA FUNCION PARA PROBAR EL OBJETO.
	bool bCraftingDone = true;
	
	int indexCraftingInfoSpawnObject;

	if(ComparePlaceActorsInfo.Num() <= 0)
	{
		bCraftingDone = false;
	}
	else
	{
		for(int i = 0; i < CraftingInfo.Num(); i++)
		{
			if(ComparePlaceActorsInfo.Num() == CraftingInfo[i].ActorsRequired.Num())
			{
				for(int k = 0; k < ComparePlaceActorsInfo.Num(); k++)
				{
					if(ComparePlaceActorsInfo[k].indexPlace != CraftingInfo[i].ActorsRequired[k].indexPlace
						|| ComparePlaceActorsInfo[k].CurrentActorPlace != CraftingInfo[i].ActorsRequired[k].CurrentActorPlace)
					{
						bCraftingDone = false;
					}
				}
				if(bCraftingDone)
				{
					UE_LOG(LogTemp, Warning, TEXT("CRAFTIE ALGO"));
					indexCraftingInfoSpawnObject = i;
					i = CraftingInfo.Num();
				}
			}
		}
	}

	
	if(bCraftingDone)
	{
		//ACA SPAWNEO EL OBJETO CON EL INDICE CONSEGUIDO.	
	}
}




