// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SurvivalCharacter.h"
#include <Maine\Public\AttackHandlerComponent.h>
#include <Maine\Public\AttractionComponent.h>
#include <Maine\Public\BlockComponent.h>
#include <Maine\Public\EquipmentComponent.h>
#include <Maine\Public\HaulingComponent.h>
#include <Maine\Public\ReactionComponent.h>
#include <Maine\Public\StaminaComponent.h>
#include <Maine\Public\StatusEffectComponent.h>
#include <Maine\Public\SurvivalComponent.h>
#include "InventoryComponent.h"
#include "EPlayerCharacterIdentity.h"
#include "BuildingPlacementComponent.h"
//#include "SurvivalCheatManager.h"
//#include <OEICommon\Public\ObsidianIDComponent.h>
#include "SurvivalPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MAINE_API ASurvivalPlayerCharacter : public ASurvivalCharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	ASurvivalPlayerCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UStaminaComponent* StaminaComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		USurvivalComponent* SurvivalComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UEquipmentComponent* EquipmentComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UHaulingComponent* HaulingComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "Survival Component")
		UInventoryComponent* InventoryComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Survival Component")
		EPlayerCharacterIdentity CharacterIdentity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true), Category = "Survival Component")
		UBuildingPlacementComponent* BuildingPlacementComponent;

	UFUNCTION(BlueprintCallable, Category = "Survival Component")
		void EnterPlaceBuildingMode(FDataTableRowHandle BuildingData, bool bAutoAddIngredients, bool bDeployable);
	UFUNCTION(BlueprintCallable, Category = "Survival Component")
		void ExitPlaceBuildingMode(bool bSuccess);
	UFUNCTION(BlueprintCallable, Category = "Survival Component")
		void ServerThrowItem();
	UFUNCTION(BlueprintCallable, Category = "Survival Component")
		void ServerStartThrow();
	UFUNCTION(BlueprintCallable, Category = "Survival Component")
		void ServerReleaseThrow();
	UFUNCTION(BlueprintCallable, Category = "Survival Component")
		void ServerReleaseAttack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
