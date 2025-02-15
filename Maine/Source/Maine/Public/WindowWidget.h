// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "EWindowInputMode.h"
#include "WindowWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UWindowWidget : public UGameUserWidget
{
	GENERATED_BODY()

public:
	UWindowWidget();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Widget")
		EWindowInputMode InputMode;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Widget")
		bool bShowPlayerIsBusy;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Widget")
		bool bIsPopUpWindow;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Widget")
		bool bIsFullscreenWindow;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Widget")
		bool bShowsCursor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Widget")
		bool bHidesHUD;

};
