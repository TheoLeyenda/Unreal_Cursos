// Copyright Theo Leyenda 2022


#include "BuildingEscapeGameMode.h"
#include "Kismet/GameplayStatics.h"

void ABuildingEscapeGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void ABuildingEscapeGameMode::CheckPlayerDead()
{
	if(!CurrentCharacter)
	{
		return;
	}

	if(CurrentCharacter->GetPlayerLifes() <= 0)
	{
		Restart();
	}
}

ABuildingScapeCharacter* ABuildingEscapeGameMode::FindCurrentCharacter()
{
	return Cast<ABuildingScapeCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());;
}

void ABuildingEscapeGameMode::Restart()
{
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}


/* EJEMPLO PARA USAR EL DELEGATE DE QUITARLE VIDA AL PLAYER
void ABuildingEscapeGameMode::Restart()
{
	ABuildingScapeCharacter* BuildingEscapeGameMode = Cast<ABuildingScapeCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());

	CurrentCharacter = FindCurrentCharacter();
	if(CurrentCharacter)
	{
		CurrentCharacter->OnSubstractLife.Clear();
		CurrentCharacter->Destroy();
	}
	RestartPlayer(GetWorld()->GetFirstPlayerController());
	
	CurrentCharacter = FindCurrentCharacter();
	if(CurrentCharacter)
	{
		CurrentCharacter->OnSubstractLife.AddDynamic(this, &ABuildingEscapeGameMode::CheckPlayerDead);
	}
}
*/

ABuildingScapeCharacter* ABuildingEscapeGameMode::GetCurrentCharacter()
{
	return CurrentCharacter;
}


