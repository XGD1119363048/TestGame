// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestGameGameModeBase.h"
#include "../Player/SpherePawnBase.h"
#include "Engine.h"

ATestGameGameModeBase::ATestGameGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	PlayerDieNum = 0;
	IsEnd = false;
}

void ATestGameGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (ASpherePawnBase* SpherePawn = Cast<ASpherePawnBase>(GetWorld()->GetFirstPlayerController()->GetPawn()))
	{
		PlayerSpherePawn = SpherePawn;
		CurrentStartLocation = PlayerSpherePawn->GetActorLocation();
	}
}

void ATestGameGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATestGameGameModeBase::SetPlayerLocation()
{
	PlayerSpherePawn->SetActorLocation(CurrentStartLocation);

	//PlayerSpherePawn->SphereMeshComp->SetPhysicsLinearVelocity(FVector(0, 0, 0));
	//PlayerSpherePawn->SphereMeshComp->SetPhysicsAngularVelocity(FVector(0, 0, 0));
	PlayerSpherePawn->ResetSpeed();
}

void ATestGameGameModeBase::SetPlayerLocation(FVector Start)
{
	PlayerSpherePawn->SetActorLocation(Start);

// 	PlayerSpherePawn->SphereMeshComp->SetPhysicsLinearVelocity(FVector(0, 0, 0));
// 	PlayerSpherePawn->SphereMeshComp->SetPhysicsAngularVelocity(FVector(0, 0, 0));
	PlayerSpherePawn->ResetSpeed();
}

void ATestGameGameModeBase::SetCurrentStart(FVector startLocation)
{
	if (startLocation != FVector(0, 0, 0))
	{
		CurrentStartLocation = startLocation;
	}
	
}

void ATestGameGameModeBase::SetGameEnd(bool EndGame)
{
	PlayerSpherePawn->IsInput = !EndGame;
	IsEnd = true;
}

void ATestGameGameModeBase::AddDieNum()
{
	PlayerDieNum++;
}
