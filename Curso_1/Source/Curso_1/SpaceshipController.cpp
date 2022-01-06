// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceshipController.h"
#include "Spaceship.h"
#include "Kismet/GameplayStatics.h"

void ASpaceshipController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if(!bHasInitializedInputComponent)
	{
		InputComponent->BindAxis("Movement_X", this, &ASpaceshipController::MoveX_Axies);
		InputComponent->BindAxis("Movement_Y", this, &ASpaceshipController::MoveY_Axies);

		// Binding action input
		InputComponent->BindAction("Shoot", IE_Pressed, this, &ASpaceshipController::OnShootPress);
		InputComponent->BindAction("Reset", IE_Pressed, this, &ASpaceshipController::OnResetPress).bExecuteWhenPaused = true;
	}
}

void ASpaceshipController::MoveX_Axies(float AxiesValue)
{
	ASpaceship* Spaceship = Cast<ASpaceship>(GetPawn());

	if(IsValid(Spaceship))
	{
		Spaceship->MoveX(AxiesValue);
	}
}

void ASpaceshipController::MoveY_Axies(float AxiesValue)
{
	ASpaceship* Spaceship = Cast<ASpaceship>(GetPawn());

	if(IsValid(Spaceship))
	{
		Spaceship->MoveY(AxiesValue);
	}
}

void ASpaceshipController::OnShootPress()
{
	ASpaceship* Spaceship = Cast<ASpaceship>(GetPawn());

	if(IsValid(Spaceship))
	{
		Spaceship->Shoot();
	}
}

void ASpaceshipController::OnResetPress()
{
	ASpaceship* Spaceship = Cast<ASpaceship>(GetPawn());
	
	if(!IsValid(Spaceship))
	{
		UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
	}
}



