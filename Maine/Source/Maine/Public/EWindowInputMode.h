// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EWindowInputMode.generated.h"

UENUM(BlueprintType)
enum class EWindowInputMode : uint8 {
    UI,
    GameAndUI,
    Game,
};
