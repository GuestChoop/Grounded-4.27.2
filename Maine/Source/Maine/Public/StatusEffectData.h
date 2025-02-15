// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StatusEffectData.generated.h"


USTRUCT(BlueprintType)
struct MAINE_API FStatusEffectData : public FTableRowBase {
    GENERATED_BODY()
public:
    FStatusEffectData();
};
