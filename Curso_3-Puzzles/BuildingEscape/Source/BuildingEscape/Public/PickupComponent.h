// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "InteractInterface.h"
#include "Item.h"
#include "Components/ActorComponent.h"
#include "PickupComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UPickupComponent : public UActorComponent, public IInteractInterface
{
	GENERATED_BODY()

public:	
	UPickupComponent();
	
	UPROPERTY(EditDefaultsOnly, Instanced, Category= "Pickup")
	UItem* PickupItem;
	
	virtual bool ExecuteInteractInterface(ABuildingScapeCharacter* Character) override;
};
