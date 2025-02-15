// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "InventoryComponent.h"
#include "Storage.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MAINE_API AStorage : public AWidgetBuilding
{
	GENERATED_BODY()

public:
	AStorage();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "InventoryComponent")
		UInventoryComponent* InventoryComponent;
};
