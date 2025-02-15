// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnimInstance.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, NonTransient)
class MAINE_API UCharacterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	
	UCharacterAnimInstance();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Anim")
		bool IsUnderwater;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Anim")
		bool IsAuthorityOrLocallyControlled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Anim")
		bool IsSwimming;
};
