// Fill out your copyright notice in the Description page of Project Settings.


#include "DieSphere.h"
#include "../Player/SpherePawnBase.h"
#include "../GameMode/TestGameGameModeBase.h"
#include "Engine.h"

void ADieSphere::OnHitSphere(class ASpherePawnBase* SpherePawn)
{
	ATestGameGameModeBase* GameModeBase = Cast<ATestGameGameModeBase>(GetWorld()->GetAuthGameMode());

	GameModeBase->SetPlayerLocation();

	GameModeBase->AddDieNum();
}
