// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NarratableUserWidget.h"
#include "GameUserWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UGameUserWidget : public UNarratableUserWidget
{
	GENERATED_BODY()

public:
	UGameUserWidget();
};
