// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESpoilState.generated.h"

UENUM(BlueprintType)
enum class ESpoilState : uint8
{
    None,
    Unspoiled,
    Spoiled,
};
