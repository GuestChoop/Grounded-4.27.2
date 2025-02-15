// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability.generated.h"

class UAttack;

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UAbility : public UObject
{
	GENERATED_BODY()
public:
	UAbility();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Ability")
		UAttack* Attack;
};
