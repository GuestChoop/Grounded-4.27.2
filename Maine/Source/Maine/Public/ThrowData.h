// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimMontage.h"
#include "GameplayTagContainer.h"
#include "ThrowData.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct MAINE_API FThrowData
{
	GENERATED_BODY()

public:

	FThrowData();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Inventory")
		uint8 bCanThrow : 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Inventory")
		uint8 bCanThrowUnderWater : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float ThrowSpeedMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float ThrowSpeedMultiplierInWater;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FGameplayTag ImpactType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		UAnimMontage* ThrowAnim;

};
