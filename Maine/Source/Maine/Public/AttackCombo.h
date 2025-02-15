// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttackCombo.generated.h"

class UAttack;

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UAttackCombo : public UObject {
    GENERATED_BODY()
public:
    UAttackCombo();

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Survival Component")
        TArray<UAttack*> Attacks;
};
