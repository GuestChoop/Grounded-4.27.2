#pragma once
#include "CoreMinimal.h"
#include <Sound/SoundBase.h>
#include "SurfaceEffect.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FSurfaceEffect {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    TEnumAsByte<EPhysicalSurface> SurfaceType;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    TSoftObjectPtr<UVisualEffect> VisualEffect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        TSoftObjectPtr<USoundBase> SoundEffect;

    MAINE_API FSurfaceEffect();
};
