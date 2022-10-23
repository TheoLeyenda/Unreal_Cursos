// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DetectDestroyActorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UDetectDestroyActorComponent : public UActorComponent
{
	GENERATED_BODY()
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDestroyActor, TSubclassOf<AActor>, ActorDestroyedClass, int32, ID);
public:	
	// Sets default values for this component's properties
	UDetectDestroyActorComponent();

protected:
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;
public:
	FOnDestroyActor OnDestroyActor;
	
};

