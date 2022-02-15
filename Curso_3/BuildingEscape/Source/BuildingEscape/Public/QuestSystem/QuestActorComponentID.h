// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QuestActorComponentID.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UQuestActorComponentID : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UQuestActorComponentID();

	virtual void BeginPlay() override;
private:
	static int32 CountQuestCreated;

public:
	UPROPERTY(VisibleAnywhere)
	int ID;
	UPROPERTY(VisibleAnywhere)
	TSubclassOf<AActor> BlueprintClass;
		
};
