// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestGameGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TESTGAME_API ATestGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	ATestGameGameModeBase();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerPawn")
	class ASpherePawnBase* PlayerSpherePawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurrentStart")
	FVector CurrentStartLocation;

	UPROPERTY(BlueprintReadOnly)
	int32 PlayerDieNum;

	UPROPERTY(BlueprintReadOnly)
	bool IsEnd;

protected:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

public:

	void SetPlayerLocation();
	void SetPlayerLocation(FVector Start);

	void SetCurrentStart(FVector startLocation);

	void SetGameEnd(bool EndGame);

	void AddDieNum();
	
};
