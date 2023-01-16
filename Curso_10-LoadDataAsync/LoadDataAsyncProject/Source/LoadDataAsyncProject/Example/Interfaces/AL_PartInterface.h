// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AL_PartInterface.generated.h"

UINTERFACE(MinimalAPI)
class UAL_PartInterface : public UInterface
{
	GENERATED_BODY()
};

class LOADDATAASYNCPROJECT_API IAL_PartInterface
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnRandomLoad_Static();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnRandomLoad_Skeletal();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLoopRandomLoad_Static();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLoopRandomLoad_Skeletal();
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnTryAsyncLoad_Static();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnTryAsyncLoad_Skeletal();
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnUnload();

};
