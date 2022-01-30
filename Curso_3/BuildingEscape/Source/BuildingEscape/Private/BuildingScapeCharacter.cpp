// Copyright Theo Leyenda 2022


#include "BuildingScapeCharacter.h"

#include "BuildingEscapeGameMode.h"
#include "InventoryComponent.h"
#include "Grabber.h"
#include "InteractComponent.h"
#include "Item.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABuildingScapeCharacter::ABuildingScapeCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	
	BaseTurnRate = 45.0f;
	BaseLookUpRate = 45.0f;

	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	Grabber = CreateDefaultSubobject<UGrabber>(TEXT("Grabber"));
	
	// Inventory System //
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));

	InteractComponent = CreateDefaultSubobject<UInteractComponent>(TEXT("InteractComponent"));
}

// Called to bind functionality to input
void ABuildingScapeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ABuildingScapeCharacter::Interact);
	PlayerInputComponent->BindAction("Restart", IE_Pressed, this, &ABuildingScapeCharacter::RestartGamePressed);
	PlayerInputComponent->BindAction("Grab", IE_Pressed, this, &ABuildingScapeCharacter::GrabPressed);
    PlayerInputComponent->BindAction("Grab", IE_Released, this, &ABuildingScapeCharacter::GrabRelease);
	
	PlayerInputComponent->BindAxis("MoveForward", this, &ABuildingScapeCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABuildingScapeCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &ABuildingScapeCharacter::Turn);

	PlayerInputComponent->BindAxis("LookUp", this, &ABuildingScapeCharacter::LookUp);

}

void ABuildingScapeCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	if(!InteractComponent){return;}
	InteractComponent->CheckEnableInteract(DeltaSeconds);
}

void ABuildingScapeCharacter::MoveForward(float Value)
{
	if(!bEnableMovement){return;}
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ABuildingScapeCharacter::MoveRight(float Value)
{
	if(!bEnableMovement){return;}
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ABuildingScapeCharacter::Turn(float Value)
{
	if(!bEnableMovement){return;}
	AddControllerYawInput(Value);
}

void ABuildingScapeCharacter::LookUp(float Value)
{
	if(!bEnableMovement){return;}
	AddControllerPitchInput(Value);
}

void ABuildingScapeCharacter::Interact()
{
	InteractComponent->Interact(this);
}

void ABuildingScapeCharacter::RestartGamePressed()
{
	ABuildingEscapeGameMode* BuildingEscapeGameMode = Cast<ABuildingEscapeGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if(!BuildingEscapeGameMode){ return; }

	BuildingEscapeGameMode->Restart();
}

void ABuildingScapeCharacter::SetPlayerFatness(float Value)
{
	Fatness = Value;
}

void ABuildingScapeCharacter::GrabPressed()
{
	if(Grabber)
	{
		Grabber->Grab();
	}
}

void ABuildingScapeCharacter::GrabRelease()
{
	if(Grabber)
	{
		Grabber->Release();
	}
}

float ABuildingScapeCharacter::GetPlayerFatness()
{
	return Fatness;
}

int ABuildingScapeCharacter::GetPlayerLifes()
{
	return Lifes;
}

void ABuildingScapeCharacter::SubstractLifes(int Value)
{
	Lifes -= Value;
	OnSubstractLife.Broadcast();
}

void ABuildingScapeCharacter::AddLifes(int Value)
{
	Lifes += Value;
}

void ABuildingScapeCharacter::UseItem(UItem* Item)
{
	if(Item)
	{
		Item->Use(this);
		Item->OnUse(this); //bp->Event.
	}
}
