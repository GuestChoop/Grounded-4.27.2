// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SurvivalPlayerController.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MAINE_API ASurvivalPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ASurvivalPlayerController();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Controller")
		UInputComponent* BuildingPlacementInputComponent;
};
