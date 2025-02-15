#pragma once
#include <Engine/DataTable.h>
#include "LocString.h"
#include "SurvivalDamageType.generated.h"

class UObject;

UCLASS(Blueprintable)
class MAINE_API USurvivalDamageType : public UDamageType {
    GENERATED_BODY()
public:
    USurvivalDamageType();

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "SurvivalDamageType")
        FLocString LocalizedDisplayName;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "SurvivalDamageType")
        TArray<UObject*> Icons;
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true), Category = "SurvivalDamageType")
        uint32 DamageTypeFlags;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "SurvivalDamageType")
        bool bCanBlock;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "SurvivalDamageType")
        bool bCanBlockWithWeapon;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "SurvivalDamageType")
        bool bCanApplyDamageReduction;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "SurvivalDamageType")
        bool bCanPlayHitReaction;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "SurvivalDamageType")
        bool bDamageDurability;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "SurvivalDamageType")
        bool bCanKill;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "SurvivalDamageType")
        bool bCanRepair;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "SurvivalDamageType")
        FDataTableRowHandle DeathNotification;
};