// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include <GameplayTagContainer.h>
#include "MaineCharMovementComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = Custom, meta = (BlueprintSpawnableComponent))
class MAINE_API UMaineCharMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:

    UMaineCharMovementComponent();

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float MaxSprintSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float MaxFlySprintSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float AnimMaxSpeedMultiplierRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float AnimAttackMaxSpeedMultiplierRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float BlockingSpeedModifier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float SprintStaminaRate;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float GlideYawRate;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float GlideRollRateMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float GlideBankRollMagnitude;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float GlideMinStartElevation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float ZiplineIgnoreCollisionDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float ZiplineMaxSpeedMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float ZiplineReattachDelay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float ZiplineExitVelocityMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float ZiplineAscendAccel;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float ZiplineMaxAscendSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float MaxSwimSprintSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        float ClimbingSprintSpeedMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        FGameplayTag ClimbingSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        bool bExitSplinesAtEnds;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        bool bAnyDamageExitsSpline;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "CharMovement")
        bool bCanWallCrawl;

    UFUNCTION(BlueprintCallable, Category = "CharMovement")
        void SetStandingInWater(bool bInWater);
};
