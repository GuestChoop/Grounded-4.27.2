#pragma once
#include "CoreMinimal.h"
#include "EDamageEventType.h"
#include "EHitReactionType.h"
#include <Engine/DataTable.h>
#include "SurvivalDamageType.h"
#include "DamageData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "DamageData")
        float Damage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "DamageData")
        TSubclassOf<USurvivalDamageType> DamageType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "DamageData")
        EDamageEventType DamageEventType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "DamageData")
        EHitReactionType ForcedHitReaction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "DamageData")
        int32 HitStun;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "DamageData")
        float Pushback;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "DamageData")
        FDataTableRowHandle DeathNotification;

    FDamageData();
};

