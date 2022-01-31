// Copyright Theo Leyenda 2022


#include "CraftingTable.h"

// Sets default values
ACraftingTable::ACraftingTable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void ACraftingTable::CheckCrafting()
{
	// HACER UNA PALANCA QUE LLAME A ESTA FUNCION PARA PROBAR EL OBJETO.
	bool bCraftingDone = true;
	
	int indexCraftingInfoSpawnObject;
	
	for(int i = 0; i < CraftingInfo.Num(); i++)
	{
		if(ActorsPlaceInfo.Num() == CraftingInfo[i].ActorsRequired.Num())
		{
			for(int k = 0; k < ActorsPlaceInfo.Num(); k++)
			{
				if(ActorsPlaceInfo[k].indexPlace != CraftingInfo[i].ActorsRequired[k].indexPlace
					|| ActorsPlaceInfo[k].CurrentActorPlace != CraftingInfo[i].ActorsRequired[k].CurrentActorPlace)
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

	
	if(bCraftingDone)
	{
		//ACA SPAWNEO EL OBJETO CON EL INDICE CONSEGUIDO.	
	}
}


