// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EHealthState.generated.h"

UENUM(BlueprintType)
enum class EHealthState : uint8 {
    Alive,
    Incapacitated,
    Dead,
};
