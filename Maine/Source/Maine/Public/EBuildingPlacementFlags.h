#pragma once
#include "CoreMinimal.h"
#include "EBuildingPlacementFlags.generated.h"

UENUM(BlueprintType)
enum class EBuildingPlacementFlags : uint8 {
    None,
    AutoAddIngredients,
    Deployable,
    Relocate,
};