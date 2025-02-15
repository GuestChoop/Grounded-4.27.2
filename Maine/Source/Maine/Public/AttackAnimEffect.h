// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimEffect.h"
#include <GameplayTagContainer.h>
#include "AttackAnimEffect.generated.h"

/**
 * 
 */
UCLASS()
class MAINE_API UAttackAnimEffect : public UAnimEffect
{
	GENERATED_BODY()

public:
	UAttackAnimEffect();

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Anim")
        bool bHasHitStops;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Anim")
        bool bHasReload;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Anim")
        FGameplayTag AttackSpeedTag;
};
