// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "ActionWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UActionWidget : public UGameUserWidget
{
	GENERATED_BODY()

public:
    UActionWidget();
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Widget")
        bool bShowMouseKeyboardControls;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Widget")
        bool bShowGamepadControls;

    UFUNCTION(BlueprintCallable, Category = "Widget")
        void SetShowMouseKeyboardControls(bool bValue);

    UFUNCTION(BlueprintCallable, Category = "Widget")
        void SetShowGamepadControls(bool bValue);

	
};
