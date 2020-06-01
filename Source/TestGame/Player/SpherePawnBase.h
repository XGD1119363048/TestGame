// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SpherePawnBase.generated.h"

UCLASS()
class TESTGAME_API ASpherePawnBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASpherePawnBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SphereComp")
	class UStaticMeshComponent* SphereMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpringArm")
	class USpringArmComponent* SpringArmComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	class UCameraComponent* CameraComp;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SphereSpeed")
	float SphereSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SphereSpeed")
	float SphereMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SphereSpeed")
	float SphererMinSpeed;

	FVector AngularVector;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void MoveForward(float val);

	UFUNCTION(BlueprintCallable)
	void MoveRight(float val);

	UFUNCTION(BlueprintCallable)
	void SpeedUp();

	UFUNCTION(BlueprintCallable)
	void SpeedDown();

	void ResetSpeed();

};
