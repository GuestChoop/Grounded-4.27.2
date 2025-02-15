// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESocketName.generated.h"

UENUM(BlueprintType)
enum class ESocketName : uint8
{
    None,
    RightHand,
    LeftHand,
    Grass,
    Log,
    ShoulderFar,
    Stack,
    HaulingFallback,
};
