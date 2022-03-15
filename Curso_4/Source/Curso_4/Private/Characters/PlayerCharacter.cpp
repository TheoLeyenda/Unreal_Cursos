// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/PlayerCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"
APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	AIPerceptionStimuliSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSource"));
	CameraBoom->SetupAttachment(RootComponent);
	FollowCamera->SetupAttachment(CameraBoom);

	CameraBoom->bUsePawnControlRotation = true;
	FollowCamera->bUsePawnControlRotation = false;
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Turn", this, &APlayerCharacter::OnInputAxisTurn);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerCharacter::OnInputLookUp);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::OnInputAxisMoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::OnInputAxisMoveRight);
}

void APlayerCharacter::OnInputAxisTurn(float AxisValue)
{
	AddControllerYawInput(AxisValue);
}

void APlayerCharacter::OnInputLookUp(float AxisValue)
{
	AddControllerPitchInput(AxisValue);
}

void APlayerCharacter::OnInputAxisMoveForward(float AxisValue)
{
	
	FRotator WordRotation = GetControlRotation();
	FRotator Rotator = FRotator(0,WordRotation.Yaw, 0);

	FVector Direction = FRotationMatrix(Rotator).GetUnitAxis(EAxis::X);

	AddMovementInput(Direction, AxisValue);
}

void APlayerCharacter::OnInputAxisMoveRight(float AxisValue)
{
	FRotator WordRotation = GetControlRotation();
	FRotator Rotator = FRotator(0,WordRotation.Yaw, 0);

	FVector Direction = FRotationMatrix(Rotator).GetUnitAxis(EAxis::Y);

	AddMovementInput(Direction, AxisValue);
}

