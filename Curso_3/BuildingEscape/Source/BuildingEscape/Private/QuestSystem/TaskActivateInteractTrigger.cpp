// Copyright Theo Leyenda 2022


#include "QuestSystem/TaskActivateInteractTrigger.h"

#include "Kismet/GameplayStatics.h"


void ATaskActivateInteractTrigger::FindInformation()
{
	Super::FindInformation();

	TArray<AActor*> Actors;

	InteractTriggers.Empty();
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AInteractTrigger::StaticClass(),Actors);

	if(Actors.Num() > 0)
	{
		for(AActor* Actor : Actors)
		{
			AInteractTrigger* InteractTrigger = Cast<AInteractTrigger>(Actor);
			if(InteractTrigger)
			{
				InteractTrigger->OnCompleteInteractTrigger.AddDynamic(this, &ATaskActivateInteractTrigger::SettingDataTask);
				InteractTriggers.Add(InteractTrigger);
			}
		}
	}
}

void ATaskActivateInteractTrigger::SettingDataTask(AInteractTrigger* InteractTrigger)
{
	SendDataPlayer.InteractActorsActivateData.Empty();

	SendDataPlayer.Fatness = BuildingScapeCharacter->GetPlayerFatness();
	SendDataPlayer.Lifes = BuildingScapeCharacter->GetPlayerLifes();
	
	SendDataPlayer.InteractActorsActivateData.Add(FInteractActorActivateData(InteractTrigger->GetClass(), InteractTrigger));

	SendEventUpdateTask();
}
