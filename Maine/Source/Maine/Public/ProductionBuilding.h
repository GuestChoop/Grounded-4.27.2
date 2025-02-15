// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CraftingBuilding.h"
#include "ProductionBuilding.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MAINE_API AProductionBuilding : public ACraftingBuilding
{
	GENERATED_BODY()

public:
	AProductionBuilding();
	
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Building")
        int32 MaxIngredients;
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    bool bCanProduceNonRecipeItems;
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    FDataTableRowHandle DefaultItemResult;
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    TArray<FRecipeMod> DefaultModItemResults;
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    FGameplayTag RecipeModTag;
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    bool bRequiresModItem;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Building")
        float ProductionTime;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Building")
        int32 MaxProductionItems;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Building")
        int32 MaxSimulateousItems;

};
