// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "StructsDataSystemQuest.h"
#include "BuildingScapeCharacter.h"
#include "Components/ActorComponent.h"
#include "QuestEvaluatorComponent.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UQuestEvaluatorComponent : public UActorComponent
{
	GENERATED_BODY()
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSettingDataPlayer, UQuestEvaluatorComponent*, QuestEvaluatorComponent, bool, bForceSend);
public:	
	// Sets default values for this component's properties
	UQuestEvaluatorComponent();

	UPROPERTY(VisibleAnywhere)
	ABuildingEscapeGameMode* BuildingEscapeGameMode;
	
	UPROPERTY(VisibleAnywhere)
	ABuildingScapeCharacter* BuildingScapeCharacter;

	UPROPERTY(VisibleAnywhere)
	FDataPlayer DataPlayer;

	UPROPERTY(Instanced, EditAnywhere)
	TArray<class UBaseTask*> Tasks;

	virtual void BeginPlay() override;

	FOnSettingDataPlayer OnQuestEvaluatorDataUpdate;
	
	UFUNCTION()
	void SettingDataPlayer(FDataPlayer NewData, bool bForceSend);

};
