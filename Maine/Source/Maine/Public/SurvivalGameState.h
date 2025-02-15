// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "SurvivalModeManagerComponent.h"
#include "HUDMarkerManagerComponent.h"
#include "SurvivalGameState.generated.h"

/**
 * 
 */
UCLASS()
class MAINE_API ASurvivalGameState : public AGameState
{
	GENERATED_BODY()

public:
	ASurvivalGameState();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true), Category = "Game Mode Setting")
		USurvivalModeManagerComponent* SurvivalModeManagerComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true), Category = "Game Mode Setting")
		UHUDMarkerManagerComponent* HUDMarkerManagerComponent;

};
