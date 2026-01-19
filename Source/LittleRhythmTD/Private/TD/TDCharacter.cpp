// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/TD/TDCharacter.h"

#include "EnhancedInputComponent.h"
#include "LittleRhythmTD.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
ATDCharacter::ATDCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 400.0f;
	SpringArm->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);
	Camera->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void ATDCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATDCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ATDCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (MoveAction)
		{
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATDCharacter::OnMoveTriggered);
			
		}
		else
		{
			UE_LOG(LogLittleRhythmTD, Error, TEXT("'%s' MoveAction invalid, can't bind to it."), *GetNameSafe(this));	
		}
	}
	else
	{
		UE_LOG(LogLittleRhythmTD, Error, TEXT("'%s' Input Component is not an Enhanced Input Component, can't setup inputs correctly."), *GetNameSafe(this));	
	}
}

void ATDCharacter::OnMoveTriggered(const FInputActionValue& InputActionValue)
{
	UE_LOG(LogLittleRhythmTD, Log, TEXT("'%s' OnMove."), *GetNameSafe(this));	
}

