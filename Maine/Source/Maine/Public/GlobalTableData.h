// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GlobalTableData.generated.h"

class UDataTable;
/**
 * 
 */
UCLASS(Blueprintable)
class MAINE_API UGlobalTableData : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UGlobalTableData();

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    UDataTable* AllItemsTable;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    UDataTable* CraftingRecipeTable;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    UDataTable* BuildingRecipeTable;

};
