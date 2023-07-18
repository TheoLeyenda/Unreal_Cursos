#include "FPSAIGuard.h"
#include "DrawDebugHelpers.h"
#include "FPSGameMode.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

AFPSAIGuard::AFPSAIGuard()
{
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));

	PawnSensingComponent->OnSeePawn.AddDynamic(this, &ThisClass::OnPawnSeen);
	PawnSensingComponent->OnHearNoise.AddDynamic(this, &ThisClass::OnNoiseHeard);
}

void AFPSAIGuard::BeginPlay()
{
	Super::BeginPlay();

	OriginalRotation = GetActorRotation();
	SetGuardState(EAIGuardState::Idle);
	InitPatrol();
}

void AFPSAIGuard::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	UpdatePatrol();
}

void AFPSAIGuard::OnPawnSeen(APawn* SeenPawn)
{
	if(SeenPawn == nullptr)
		return;
	
	DrawDebugSphere(GetWorld(), SeenPawn->GetActorLocation(), 32.0f + 5.0f, 12, FColor::Red, false, 10.0f);

	if(auto* GameMode = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode()))
	{
		GameMode->CompleteMission(SeenPawn, false);
	}

	SetGuardState(EAIGuardState::Alerted);

	StopPatrolMovement();
}

void AFPSAIGuard::OnNoiseHeard(APawn* NoiseInstigator, const FVector& Location, float Volume)
{
	if(NoiseInstigator == nullptr || GuardState == EAIGuardState::Alerted)
		return;
	
	DrawDebugSphere(GetWorld(), Location, 32.0f - 5.0f, 12, FColor::Green, false, 10.0f);

	FVector Direction = Location - GetActorLocation();
	Direction.Normalize();
	
	FRotator NewLookAt = FRotationMatrix::MakeFromX(Direction).Rotator();
	NewLookAt.Pitch = 0.0f;
	NewLookAt.Roll = 0.0f;
	
	SetActorRotation(NewLookAt);
	
	GetWorldTimerManager().SetTimer(TimerHandle_ResetOrientation, this, &ThisClass::ResetOrientation, 3.0f);

	SetGuardState(EAIGuardState::Suspicious);

	StopPatrolMovement();
}

void AFPSAIGuard::ResetOrientation()
{
	if(GuardState == EAIGuardState::Alerted)
		return;
	
	SetActorRotation(OriginalRotation);
	SetGuardState(EAIGuardState::Idle);

	ResumePatrolMovement();
}


void AFPSAIGuard::SetGuardState(EAIGuardState NewState)
{
	if(NewState == GuardState)
		return;

	GuardState = NewState;

	OnStateChanged(GuardState);
}

void AFPSAIGuard::InitPatrol()
{
	if(bPatrol)
	{
		bPatrol = TargetPoints.Num() > 1;
		if(bPatrol)
		{
			MoveToNextPatrolPoint();
		}
	}
}

void AFPSAIGuard::UpdatePatrol()
{
	if(CurrentPatrolPoint && bPatrol)
	{
		FVector Delta = GetActorLocation() - CurrentPatrolPoint->GetActorLocation();
		float DistanceToGoal = Delta.Size();

		if(DistanceToGoal < 50)
		{
			MoveToNextPatrolPoint();
		}
	}
}

void AFPSAIGuard::MoveToNextPatrolPoint()
{
	if(!GetController())
		return;
	
	TargetPoints.Remove(nullptr);
	
	if(CurrentPatrolPoint == nullptr || CurrentPatrolPoint == TargetPoints[TargetPoints.Num() - 1])
	{
		CurrentIndex = 0;
		CurrentPatrolPoint = TargetPoints[CurrentIndex];
	}
	else
	{
		CurrentPatrolPoint = TargetPoints[CurrentIndex];
	}

	UAIBlueprintHelperLibrary::SimpleMoveToActor(GetController(), CurrentPatrolPoint);
	CurrentIndex++;

	
}

void AFPSAIGuard::StopPatrolMovement()
{
	//Stop Movement if Patrolling
	if(GetController() && bPatrol)
	{
		GetController()->StopMovement();
	}
}

void AFPSAIGuard::ResumePatrolMovement()
{
	if(bPatrol)
	{
		UAIBlueprintHelperLibrary::SimpleMoveToActor(GetController(), CurrentPatrolPoint);
	}
}
