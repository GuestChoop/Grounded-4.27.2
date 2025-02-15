// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EWindowPauseBehavior.generated.h"

UENUM(BlueprintType)
enum class EWindowPauseBehavior : uint8 {
    DoNotPause,
    AlwaysPause,
    PauseBasedOnDifficulty,
    Manual,
};
