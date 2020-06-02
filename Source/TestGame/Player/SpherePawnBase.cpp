// Fill out your copyright notice in the Description page of Project Settings.


#include "SpherePawnBase.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
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

	//SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
	//RootComponent = SceneComp;

	SphereMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMeshComp"));
	//SphereMeshComp->SetupAttachment(SceneComp);
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

	PlayerStartLocation = this->GetActorLocation();
	
}

// Called every frame
void ASpherePawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsInput && !AngularVector.IsZero())
	{
		FVector NewVector = FVector(0, 0, 0);
		NewVector += AngularVector.X * SpringArmComp->GetForwardVector() * SphereSpeed;
		NewVector += AngularVector.Y * SpringArmComp->GetRightVector() * SphereSpeed;
		SphereMeshComp->SetPhysicsAngularVelocity(NewVector);
		//SphereMeshComp->SetPhysicsAngularVelocityInDegrees(AngularVector);
	}

	//Set Camera Rotation LR
	{
		FRotator LRRotation = SpringArmComp->GetComponentRotation();
		LRRotation.Yaw += CameraInput.X;
		//SpringArmComp->SetWorldRotation(LRRotation);
		SpringArmComp->SetRelativeRotation(LRRotation);
	}
	//Set Camera Rotation UD
	{
		FRotator UDRotation = SpringArmComp->GetComponentRotation();
		UDRotation.Pitch = FMath::Clamp(UDRotation.Pitch + CameraInput.Y, -80.0f, -15.0f);
		//SpringArmComp->SetWorldRotation(UDRotation);
		SpringArmComp->SetRelativeRotation(UDRotation);
	}

	//SpringArm Follow Sphere
	{
		FVector NewLocation = SphereMeshComp->GetComponentLocation();
		SpringArmComp->SetWorldLocation(NewLocation);
	}
}

// Called to bind functionality to input
void ASpherePawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASpherePawnBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASpherePawnBase::MoveRight);

	PlayerInputComponent->BindAxis("CameraYaw", this, &ASpherePawnBase::CameraYaw);
	PlayerInputComponent->BindAxis("CameraPitch", this, &ASpherePawnBase::CameraPitch);

	PlayerInputComponent->BindAction("SpeedChange", IE_Pressed, this, &ASpherePawnBase::SpeedUp);
	PlayerInputComponent->BindAction("SpeedChange", IE_Released, this, &ASpherePawnBase::SpeedDown);

}

void ASpherePawnBase::MoveForward(float AxisValue)
{
	if (IsInput)
	{
		AngularVector.Y = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
	}
}

void ASpherePawnBase::MoveRight(float AxisValue)
{
	if (IsInput)
	{
		AngularVector.X = -FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
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

void ASpherePawnBase::CameraYaw(float AxisValue)
{
	CameraInput.Y = AxisValue;
}

void ASpherePawnBase::CameraPitch(float AxisValue)
{
	CameraInput.X = AxisValue;
}

void ASpherePawnBase::ResetSpeed()
{
	SphereMeshComp->SetPhysicsLinearVelocity(FVector(0, 0, 0));
	SphereMeshComp->SetPhysicsAngularVelocity(FVector(0, 0, 0));
}

