// Copyright Theo Leyenda 2022


#include "QuestSystem/TaskDestroyActor.h"
#include "Kismet/GameplayStatics.h"
#include "QuestSystem/QuestActorComponentID.h"

void UTaskDestroyActor::FindInformation()
{
	Super::FindInformation();
	TArray<AActor*> Actors;

	DetectDestroyActorComponents.Empty();
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(),Actors);

	if(Actors.Num() > 0)
	{
		for(AActor* Actor : Actors)
		{
			if(Actor)
			{
				UDetectDestroyActorComponent* DetectDestroyActorComponent = Cast<UDetectDestroyActorComponent>(Actor->GetComponentByClass(UDetectDestroyActorComponent::StaticClass()));
				if(DetectDestroyActorComponent)
				{
					DetectDestroyActorComponent->OnDestroyActor.AddDynamic(this, &UTaskDestroyActor::SettingDataTask);
					DetectDestroyActorComponents.Add(DetectDestroyActorComponent);
				}
			}
		}
	}
	
}

void UTaskDestroyActor::SettingDataTask(TSubclassOf<AActor> ActorDestroyed, int32 ID)
{
	
	if(!BuildingScapeCharacter){return;}

	if(!BuildingScapeCharacter->PlayerInventoryComponent){return;}
	
	SettingDataBaseTask(false);

	SendDataPlayer.LastInteractActorInfo.ActorBlueprint = ActorDestroyed;
	
	SendDataPlayer.LastInteractActorInfo.ID = ID;
	UE_LOG(LogTemp, Warning, TEXT("%s"), *ActorDestroyed->GetName());
	UE_LOG(LogTemp, Warning, TEXT("%d"), ID);
	SendEventUpdateTask(false);
}
