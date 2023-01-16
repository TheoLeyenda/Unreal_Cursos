// Fill out your copyright notice in the Description page of Project Settings.


#include "LoadDataAsyncProject/Example/Actors/AL_AsyncTestActor.h"
#include "LoadDataAsyncProject/Example/Parts/Skeletal/AL_SkeletalMeshComp.h"
#include "LoadDataAsyncProject/Example/Parts/Static/AL_StaticMeshComp.h"

AAL_AsyncTestActor::AAL_AsyncTestActor()
{
	PrimaryActorTick.bCanEverTick = false;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SceneComponent->SetupAttachment(RootComponent);
	
	AsyncSkeletalMesh = CreateDefaultSubobject<UAL_SkeletalMeshComp>(TEXT("SkeletalMeshComp"));
	AsyncSkeletalMesh->SetupAttachment(SceneComponent);
	AsyncStaticMesh = CreateDefaultSubobject<UAL_StaticMeshComp>(TEXT("StaticMeshComp"));
	AsyncStaticMesh->SetupAttachment(SceneComponent);
}

