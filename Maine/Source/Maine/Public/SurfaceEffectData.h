#pragma once
#include "CoreMinimal.h"
#include "SurfaceEffect.h"
#include <Engine/DataAsset.h>
#include "SurfaceEffectData.generated.h"

UCLASS(Blueprintable)
class MAINE_API USurfaceEffectData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        FSurfaceEffect DefaultEffect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        TArray<FSurfaceEffect> OverrideEffects;

    USurfaceEffectData();
};
