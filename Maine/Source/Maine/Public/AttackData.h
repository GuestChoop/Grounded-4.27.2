// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttackAIParams.h"
#include "DamageData.h"
#include "EAttackHitType.h"
#include "EAttackStatusEffectApplyType.h"
#include "Engine/DataTable.h"
#include <Sound/SoundBase.h>
#include "SurvivalCharacter.h"
#include "AttackAnimEffect.h"
#include "SurfaceEffectData.h"
#include "AttackData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FAttackData : public FTableRowBase
{
    GENERATED_BODY()

public:
    FAttackData();

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        FDamageData DamageData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        TArray<FDamageData> DamageDataSecondary;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        FDamageData ChargedDamageData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        float ChargeTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        bool bChargeHoldChainsAttack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        float Range;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        float ChargedRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        float OverrideTraceRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        float ConeAngle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        float ConeBaseDirectionAngle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        bool ConeBaseDirectionSymetry;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        bool bIgnoreVisibilityCheck;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        float Duration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        float SoundIntensity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        float SoundRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        EAttackHitType HitResolutionType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 bIsHostile : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 bFriendlyFire : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 bIgnoreOwner : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 bDropHauledItems : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 FireAttackOnFullCharge : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 bEndAttackOnHit : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 bHitFrameLoops : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 bIsJumpAttack : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 bChargeHitOnlyOnCharacter : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 bSelfDestruct : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 bDestroyTarget : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 bIgnoreItemDamageTypeModifiers : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 bCanTriggerOnTriggeredAttacks : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 bCanTriggerExtraAttacks : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        FAttackAIParams AIParams;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        int32 StaminaCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        uint8 bConsumeStaminaOnHitFrame : 1;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
    //    TSoftClassPtr<AProjectile> ProjectileClass;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
    //    TSoftClassPtr<AProjectile> ChargedProjectileClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        TSoftClassPtr<ASurvivalCharacter> SummonClass;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
    //    TArray<FAttackHazardParams> Hazards;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        bool bRangedAttack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        bool bBurrowAttack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        bool bBurrowOnEndAttack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        bool bUnBurrowOnEndAttack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        bool bForceSwapFoliageOnHit;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        float ProjectileAttackTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        FName OriginSocket;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        FRotator LaunchOrientationOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        FRotator LaunchOrientationDeviation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        bool bUseLegacyOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        bool bThrowAttack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        float MinThrowIntensity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        float MaxThrowIntensity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        bool bSummonBossMobsPhase;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        TArray<FDataTableRowHandle> StatusEffects;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        EAttackStatusEffectApplyType StatusEffectApplyType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        UAttackAnimEffect* AttackAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        TSoftObjectPtr<UAnimMontage> WeaponAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        TSoftObjectPtr<UAnimMontage> DeflectAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        FDataTableRowHandle DeathNotification;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
    //    TSoftObjectPtr<UVisualEffect> StartVFX;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
    //    TSoftObjectPtr<UVisualEffect> ChargingVFX;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
    //    TSoftObjectPtr<UVisualEffect> LaunchVFX;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
    //    TSoftObjectPtr<UVisualEffect> AttackVFX;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
    //    TSoftObjectPtr<UVisualEffect> AttackChargedVFX;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        TSoftObjectPtr<USoundBase> SoundFX;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        TSoftObjectPtr<USoundBase> ChargingSFX;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        TSoftObjectPtr<USoundBase> LaunchSFX;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        TSoftObjectPtr<USurfaceEffectData> HitEffect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "AttackData")
        bool bActivateWeaponEffects;
};
