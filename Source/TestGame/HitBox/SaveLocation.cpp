// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveLocation.h"
#include "../GameMode/TestGameGameModeBase.h"
#include "HitBoxBase.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

ASaveLocation::ASaveLocation()
{
	SaveMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SaveMeshComp"));
	//SaveMeshComp->SetupAttachment(SceneComp);
	RootComponent = SaveMeshComp;
	BoxComp->SetupAttachment(SaveMeshComp);
}

void ASaveLocation::OnHitSphere(class ASpherePawnBase* SpherePawn)
{
	ATestGameGameModeBase* GameModeBase = Cast<ATestGameGameModeBase>(GetWorld()->GetAuthGameMode());

	GameModeBase->SetCurrentStart(BoxComp->GetComponentLocation());
}
