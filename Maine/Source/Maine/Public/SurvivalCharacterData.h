// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LocString.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "SurvivalCharacterData.generated.h"


USTRUCT(BlueprintType)
struct MAINE_API FSurvivalCharacterData : public FTableRowBase {

    GENERATED_BODY()
public:
    FSurvivalCharacterData();
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        FLocString CharacterName;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        FGameplayTagContainer CharacterTags;

};