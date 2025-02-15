// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RecipeUnlockMode.generated.h"

UENUM()
enum class RecipeUnlockMode : uint8 {
    Default,
    IncludeHidden,
};
