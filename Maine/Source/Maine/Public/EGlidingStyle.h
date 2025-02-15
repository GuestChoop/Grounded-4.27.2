// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EGlidingStyle.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EGlidingStyle : uint8
{
    None,
    FallingSlowly,
    Gliding,
};
