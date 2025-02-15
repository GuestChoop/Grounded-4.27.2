// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EPlayerCharacterIdentity.generated.h"

UENUM(BlueprintType)
enum class EPlayerCharacterIdentity : uint8 {
    Max,
    Hoops,
    Pete,
    Willow,
    MrBones,
    Count,
    None = 0xFE,
    Random,
};

