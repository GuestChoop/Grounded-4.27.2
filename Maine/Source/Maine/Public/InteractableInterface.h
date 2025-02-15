// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EInteractionChannel.h"
#include "Templates/SubclassOf.h"
#include "EInteractionState.h"
#include "InteractableInterface.generated.h"
/**
 * 
 */
UINTERFACE(Blueprintable, MinimalAPI)
class UInteractableInterface : public UInterface {
    GENERATED_BODY()
};

class IInteractableInterface : public IInterface {
    GENERATED_BODY()

public:
    IInteractableInterface();
};
