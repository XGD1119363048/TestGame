// Fill out your copyright notice in the Description page of Project Settings.


#include "EndLocation.h"
#include "../GameMode/TestGameGameModeBase.h"
#include "Components/StaticMeshComponent.h"
#include "Engine.h"

AEndLocation::AEndLocation()
{
	EndMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndMeshComp"));
	RootComponent = EndMeshComp;
	BoxComp->SetupAttachment(EndMeshComp);
}

void AEndLocation::OnHitSphere(class ASpherePawnBase* SpherePawn)
{
	ATestGameGameModeBase* GameModeBase = Cast<ATestGameGameModeBase>(GetWorld()->GetAuthGameMode());

	GameModeBase->SetGameEnd(true);
}
