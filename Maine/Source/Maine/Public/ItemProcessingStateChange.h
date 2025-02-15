// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <GameplayTagContainer.h>
#include "ItemProcessingStateChange.generated.h"
/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FItemProcessingStateChange
{
	GENERATED_BODY()
public:

	FItemProcessingStateChange();
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FGameplayTag ProcessingType;

};
