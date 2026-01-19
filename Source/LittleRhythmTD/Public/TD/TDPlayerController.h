// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TDPlayerController.generated.h"

class UInputMappingContext;
/**
 * 
 */
UCLASS()
class LITTLERHYTHMTD_API ATDPlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	virtual void SetupInputComponent() override;
	
protected:

	UPROPERTY(EditAnywhere, Category ="Input|Input Mappings")
	TObjectPtr<UInputMappingContext> PlayerMappingContext;
};
