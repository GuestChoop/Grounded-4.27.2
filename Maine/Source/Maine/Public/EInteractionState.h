#pragma once
#include "CoreMinimal.h"
#include "EInteractionState.generated.h"

UENUM(BlueprintType)
enum class EInteractionState : uint8 {
    Hidden,
    Disabled,
    Enabled,
};
