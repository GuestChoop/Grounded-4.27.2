// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LootData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FLootData {
    GENERATED_BODY()
public:

    FLootData();

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Loot Component")
        FDataTableRowHandle ItemData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Loot Component")
        int32 Count;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Loot Component")
        float DropChance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true), Category = "Loot Component")
        float DropChanceMultiplier;
};