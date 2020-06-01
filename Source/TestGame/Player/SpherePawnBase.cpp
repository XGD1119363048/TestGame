// Fill out your copyright notice in the Description page of Project Settings.


#include "SpherePawnBase.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine.h"

// Sets default values
ASpherePawnBase::ASpherePawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	IsInput = true;
	SphereSpeed = 300.f;
	SphereMaxSpeed = 500.f;
	SphererMinSpeed = SphereSpeed;

	SphereMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMeshComp"));
	SphereMeshComp->SetSimulatePhysics(true);

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->SetupAttachment(SphereMeshComp);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);

}

// Called when the game starts or when spawned
void ASpherePawnBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpherePawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsInput && AngularVector != FVector(0, 0, 0))
	{
		SphereMeshComp->SetPhysicsAngularVelocity(AngularVector);
		//SphereMeshComp->SetPhysicsAngularVelocityInDegrees(AngularVector);
	}
}

// Called to bind functionality to input
void ASpherePawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASpherePawnBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASpherePawnBase::MoveRight);

	PlayerInputComponent->BindAction("SpeedChange", IE_Pressed, this, &ASpherePawnBase::SpeedUp);
	PlayerInputComponent->BindAction("SpeedChange", IE_Released, this, &ASpherePawnBase::SpeedDown);

}

void ASpherePawnBase::MoveForward(float val)
{
	if (IsInput)
	{
		AngularVector.Y = SphereSpeed * val;
	}
}

void ASpherePawnBase::MoveRight(float val)
{
	if (IsInput)
	{
		AngularVector.X = -SphereSpeed * val;
	}
}

void ASpherePawnBase::SpeedUp()
{
	SphereSpeed = SphereMaxSpeed;
}

void ASpherePawnBase::SpeedDown()
{
	SphereSpeed = SphererMinSpeed;
}

void ASpherePawnBase::ResetSpeed()
{
	SphereMeshComp->SetPhysicsLinearVelocity(FVector(0, 0, 0));
	SphereMeshComp->SetPhysicsAngularVelocity(FVector(0, 0, 0));
}

