// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EBuildingState.generated.h"

UENUM(BlueprintType)
enum class EBuildingState : uint8 {
    None,
    Built,
    BeingPlaced,
    BeingPlacedInvalid,
    UnderConstruction,
    Cancelled,
    Destroyed,
    CollapseDestroy,
};
