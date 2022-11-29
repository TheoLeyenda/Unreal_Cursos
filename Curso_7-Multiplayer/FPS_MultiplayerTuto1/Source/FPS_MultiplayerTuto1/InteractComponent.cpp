// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractComponent.h"

void UInteractComponent::SetupInteractComponent()
{
	OwnerController = Cast<AController>(GetOwner());
	if(!OwnerController)
	{
		if(auto* MyPawn = Cast<APawn>(GetOwner()))
		{
			OwnerController = MyPawn->GetController();
			OwnerPawn = MyPawn;
		}
	}
}

void UInteractComponent::BeginPlay()
{
	Super::BeginPlay();
	SetupInteractComponent();
}

bool UInteractComponent::Interaction(){return true;}
