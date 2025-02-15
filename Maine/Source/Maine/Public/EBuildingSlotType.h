// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EBuildingSlotType.generated.h"

UENUM(BlueprintType)
enum class EBuildingSlotType : uint8 {
    None,
    Cell,
    Floor,
    Wall,
};

