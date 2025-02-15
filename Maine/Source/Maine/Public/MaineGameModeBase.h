// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SurvivalPlayerController.h"
#include "MaineGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MAINE_API AMaineGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMaineGameModeBase();

	//UFUNCTION(BlueprintCallable, Category = "SurvivalCheatManager")
	//	virtual bool AllowCheats(APlayerController* P) override;
};
