// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <GameplayTagContainer.h>
#include "ProcessingTypeGlobalData.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct MAINE_API FProcessingTypeGlobalData
{
	GENERATED_BODY()
public:

	FProcessingTypeGlobalData();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FGameplayTag ProcessingTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float ProcessingTime;
};
