// Copyright Theo Leyenda 2022


#include "QuestSystem/TaskActivatePlayerStatsUpdate.h"

void UTaskActivatePlayerStatsUpdate::FindInformation()
{
	Super::FindInformation();
	if(BuildingScapeCharacter)
	{
		BuildingScapeCharacter->OnUpdatePlayerStats.AddDynamic(this, &UTaskActivatePlayerStatsUpdate::SettingDataTask);
	}
}

void UTaskActivatePlayerStatsUpdate::SettingDataTask(ABuildingScapeCharacter* Value)
{
	SettingDataBaseTask(true);
}
