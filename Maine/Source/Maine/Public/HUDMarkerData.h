// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HUDMarkerData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)

class MAINE_API UHUDMarkerData : public UObject
{
	GENERATED_BODY()

public:
	UHUDMarkerData();
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
        TWeakObjectPtr<AActor> ReferenceActor;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "HUD")
        uint8 bShowOnlyNearby : 1;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "HUD")
        uint8 ShowDistance : 1;
    UFUNCTION(BlueprintCallable, Category = "HUD")
        void SetIconVariant(int32 Variant);
    UFUNCTION(BlueprintCallable, Category = "HUD")
        void SetDisplayName(const FString& NewName);
    UFUNCTION(BlueprintCallable, Category = "HUD")
        void SetColorVariant(int32 Variant);
    UFUNCTION(BlueprintCallable, Category = "HUD")
        void SetColor(FColor NewColor);

};
