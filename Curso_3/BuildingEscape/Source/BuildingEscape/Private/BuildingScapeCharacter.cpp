// Copyright Theo Leyenda 2022


#include "BuildingScapeCharacter.h"
#include "InventoryComponent.h"
#include "Item.h"


// Sets default values
ABuildingScapeCharacter::ABuildingScapeCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	BaseTurnRate = 45.0f;
	BaseLookUpRate = 45.0f;

	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Inventory System //
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>("Inventory");
}

// Called to bind functionality to input
void ABuildingScapeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &ABuildingScapeCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABuildingScapeCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &ABuildingScapeCharacter::Turn);

	PlayerInputComponent->BindAxis("LookUp", this, &ABuildingScapeCharacter::LookUp);

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



void ABuildingScapeCharacter::SetPlayerHealth(float Value)
{
	Health = Value;
}

float ABuildingScapeCharacter::GetPlayerHealth()
{
	return Health;
}

void ABuildingScapeCharacter::UseItem(UItem* Item)
{
	if(Item)
	{
		Item->Use(this);
		Item->OnUse(this); //bp->Event.
	}
}
