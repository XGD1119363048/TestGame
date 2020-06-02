// Fill out your copyright notice in the Description page of Project Settings.


#include "GateDoor.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/BoxComponent.h"
#include "../Player/SpherePawnBase.h"
#include "Engine.h"
#include "Kismet/GameplayStatics.h"

AGateDoor::AGateDoor()
{
	DoorComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorComp"));
	ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));

	RootComponent = DoorComp;
	BoxComp->SetupAttachment(DoorComp);
	ParticleComp->SetupAttachment(BoxComp);

	ParticleComp->SetVisibility(false);
}

void AGateDoor::OnHitSphere(class ASpherePawnBase* SpherePawn)
{
	SpherePawn->ResetSpeed();
	//SpherePawn->SetActorLocation(SpherePawn->PlayerStartLocation);
	ParticleComp->SetVisibility(true);

	UGameplayStatics::OpenLevel(GetWorld(), TEXT("/Game/Maps/Test"));
}
