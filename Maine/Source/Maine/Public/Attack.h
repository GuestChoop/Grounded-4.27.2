// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnAttackCancelledDelegate.h"
#include "AttackHandlerComponent.h"
#include "StaminaComponent.h"
#include "StatusEffectComponent.h"
#include "Item.h"
#include "Ability.h"
#include "Attack.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UAttack : public UObject
{
	GENERATED_BODY()
	
public:
	UAttack();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Attack")
		FOnAttackCancelled OnAttackCancelled;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Attack")
        AActor* Owner;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true), Category = "Attack")
        UAttackHandlerComponent* AttackHandlerComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true), Category = "Attack")
        UStaminaComponent* StaminaComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true), Category = "Attack")
        UStatusEffectComponent* StatusEffectComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Attack")
        UAbility* AbilityOwner;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Attack")
        UItem* ItemOwner;
};
