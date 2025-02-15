// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GlobalItemData.h"
#include "GlobalBuildingData.h"
//#include "GlobalTableData.h"
#include "GlobalSaveLoadData.h"
#include "SurvivalGameModeSettings.h"
#include "EGameMode.h"
#include "SurvivalGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MAINE_API USurvivalGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	USurvivalGameInstance();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		UGlobalItemData* GlobalItemData;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Game Mode Setting")
		TMap<EGameMode, TSubclassOf<USurvivalGameModeSettings>> DefaultGameModes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Building")
		UGlobalBuildingData* GlobalBuildingData;
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Table")
	//	UGlobalTableData* GlobalTableData;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Save Load")
		UGlobalSaveLoadData* GlobalSaveLoadData;



};
