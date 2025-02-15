
#pragma once
#include "CoreMinimal.h"
#include "BuildingDelegateDelegate.generated.h"

class ABuilding;
class UBuildingPlacementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBuildingDelegate, UBuildingPlacementComponent*, Sender, ABuilding*, Building);
