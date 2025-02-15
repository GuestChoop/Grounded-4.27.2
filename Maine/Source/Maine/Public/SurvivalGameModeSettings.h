// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SurvivalGameModeSettings.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MAINE_API USurvivalGameModeSettings : public UObject
{
	GENERATED_BODY()

public:
    USurvivalGameModeSettings();
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Game Mode Setting")
        float HungerAndThirstMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Game Mode Setting")
        float PlayerDamageMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Game Mode Setting")
        float EnemyDamageMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Game Mode Setting")
        float BuildingHealthMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Game Mode Setting")
        float HeatMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Game Mode Setting")
        float ItemSpoilageMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Game Mode Setting")
        float ItemDurabilityMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Game Mode Setting")
        float ItemDurabilityPenaltyOnDeathPercentage;

};
