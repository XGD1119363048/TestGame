// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HitBoxBase.h"
#include "GateDoor.generated.h"

/**
 * 
 */
UCLASS()
class TESTGAME_API AGateDoor : public AHitBoxBase
{
	GENERATED_BODY()

public:

	AGateDoor();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* DoorComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent* ParticleComp;

public:

	virtual void OnHitSphere(class ASpherePawnBase* SpherePawn) override;
	
};
