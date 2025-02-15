// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NarratableUserWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UNarratableUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UNarratableUserWidget();
};
