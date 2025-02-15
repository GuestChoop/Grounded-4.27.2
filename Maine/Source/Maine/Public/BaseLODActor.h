// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//#include "BaseLODComponent.h"
#include "BaseLODActor.generated.h"

/**
 * 
 */
UCLASS()
class MAINE_API UBaseLODActor : public UObject
{
	GENERATED_BODY()
public:
	UBaseLODActor();
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "LOD")
	//	TArray<UBaseLODComponent*> LODComponents;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "LOD")
		AActor* K2_GetFullActor();
};
