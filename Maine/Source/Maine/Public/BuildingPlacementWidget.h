// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "BuildingPlacementWidget.generated.h"

class ABuilding;
class APlayerController;
class UBuildingPlacementComponent;

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UBuildingPlacementWidget : public UGameUserWidget {
    GENERATED_BODY()
public:

    UBuildingPlacementWidget();

    UFUNCTION(BlueprintCallable)
        void OnBuildModeStateChanged(APlayerController* Controller, bool IsInBuildMode);
    UFUNCTION(BlueprintCallable)
        void HandlePendingBuildingClassChanged(UBuildingPlacementComponent* Sender, ABuilding* PendingBuilding);
    UFUNCTION(BlueprintCallable)
        void HandleAlternatePlacementModeToggleChanged(UBuildingPlacementComponent* Sender, bool bAlternateModeToggleState);
    UFUNCTION(BlueprintCallable)
        void HandleAlternatePlacementModeChanged(UBuildingPlacementComponent* Sender, bool bAlternateMode);
};
