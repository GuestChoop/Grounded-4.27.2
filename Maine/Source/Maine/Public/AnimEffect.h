// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAnimEffect.h"
#include "AnimEffect.generated.h"

/**
 * 
 */
UCLASS()
class MAINE_API UAnimEffect : public UBaseAnimEffect
{
	GENERATED_BODY()

public:
	UAnimEffect();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Anim")
		UAnimMontage* Anim;

};
