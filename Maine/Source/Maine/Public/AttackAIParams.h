#pragma once

#include "CoreMinimal.h"
#include "AttackAIParams.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FAttackAIParams {
    GENERATED_BODY()

public:
    FAttackAIParams();

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackAIParams")
        float MinDist;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackAIParams")
        float MaxDist;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackAIParams")
        float PreferredMaxDist;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackAIParams")
        float PreferredDistPostLunge;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackAIParams")
        float PreferredHeight;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackAIParams")
        float RequiredSideClearance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackAIParams")
        bool bLockRotation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackAIParams")
        bool bRequiresFacing;
};

