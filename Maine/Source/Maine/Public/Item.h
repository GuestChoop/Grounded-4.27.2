// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PersistentObject.h"
#include "BaseItemData.h"
#include "OnLaunchAttackDelegate.h"
#include "AttackCombo.h"
#include "Item.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MAINE_API UItem : public UPersistentObject
{
	GENERATED_BODY()

public:
	UItem();

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Item")
		FOnLaunchAttack OnLaunchAttack;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true), Category = "Item")
		UAttackCombo* AttackCombo;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true), Category = "Item")
		UAttackCombo* AlternateAttackCombo;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true), Category = "Item")
		UAttackCombo* SwimmingAttackCombo;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Item")
		FBaseItemData GetItemData();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Item")
		bool IsEquipped();
};
