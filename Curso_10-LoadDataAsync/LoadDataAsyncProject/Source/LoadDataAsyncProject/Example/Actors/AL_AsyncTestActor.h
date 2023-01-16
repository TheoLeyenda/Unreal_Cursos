// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LoadDataAsyncProject/Example/Interfaces/AL_PartInterface.h"
#include "AL_AsyncTestActor.generated.h"

UCLASS()
class LOADDATAASYNCPROJECT_API AAL_AsyncTestActor : public AActor, public IAL_PartInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAL_AsyncTestActor();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Root")
	USceneComponent* SceneComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Meshes")
	class UAL_StaticMeshComp* AsyncStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Meshes")
	class UAL_SkeletalMeshComp* AsyncSkeletalMesh;
public:	

};
