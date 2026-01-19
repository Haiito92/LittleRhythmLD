// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/TD/TDPlayerController.h"

#include "EnhancedInputSubsystems.h"
#include "LittleRhythmTD.h"

void ATDPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (!IsLocalPlayerController()) return;

	if (UEnhancedInputLocalPlayerSubsystem* InputSubsystem = GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
	{
		if (!PlayerMappingContext)
		{
			UE_LOG(LogLittleRhythmTD, Error, TEXT("'%s' PlayerMappingContext invalid, can't add it to EnhancedInputLocalPlayerSubsystem."), *GetNameSafe(this));
			return;
		}

		InputSubsystem->AddMappingContext(PlayerMappingContext, 0);
	}
}
