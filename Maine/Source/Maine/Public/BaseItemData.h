// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"
#include "Sound/SoundCue.h"
#include "GameplayTagContainer.h"
#include <EInteractAnimType.h>
#include <GlidingData.h>
#include <InspectData.h>
#include <ItemPowerData.h>
#include <ThrowData.h>
#include <SpoilData.h>
#include <HaulingData.h>
#include <ItemProcessingStateChange.h>
#include <EquippableData.h>
#include <EItemType.h>
#include <LocString.h>
#include <EEquipmentSlot.h>
#include <AttackComboData.h>
#include <AttackAmmoData.h>
#include <SearchableKeywords.h>
#include <EHUDMarkerType.h>
#include "BaseItemData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MAINE_API FBaseItemData : public FTableRowBase
{
	GENERATED_BODY()

public:
	FBaseItemData();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FLocString LocalizedDisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<FSearchableKeywords> SearchableKeywords;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FLocString LocalizedDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		UTexture2D* Icon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		EItemType ItemType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
		FGameplayTag RarityTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FGameplayTag StackSizeTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<FDataTableRowHandle> UnlockRecipes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<FDataTableRowHandle> ResearchUnlockRecipes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<FDataTableRowHandle> TechTreeUnlocks;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TSoftClassPtr<class ASpawnedItem> WorldActor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Inventory")
		uint8 bWorldMarker : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int32 Tier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TSoftClassPtr<class ASpawnedItem> EquippedActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FEquippableData EquippableData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		EEquipmentSlot Slot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true), Category = "Inventory")
		bool TwoHanded;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int32 Stance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		ESocketName OverrideEquipSocket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		bool bIsLightSource;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		bool bCanBlock;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FAttackComboData AttackComboData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FAttackComboData AlternateAttackComboData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FAttackComboData SwimmingAttackComboData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<FAttackAmmoData> AmmoAttackData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<FDataTableRowHandle> ConsumableData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		USoundCue* ConsumeAudio;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		EInteractAnimType ConsumeAnimType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		bool bBurgleQuestCanAnalyze;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int32 BurgleQuestAnalyzeRewardLevel;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	//	UObject* OverrideTemplateConsumeAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FHaulingData HaulingData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<FItemProcessingStateChange> ProcessingOptions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TSoftClassPtr<ASpawnedItem> ProcessingActorOverride;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FSpoilData SpoilData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FThrowData ThrowData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FItemPowerData PowerData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FInspectData InspectData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FGlidingData GlidingData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FGameplayTagContainer ResourceCategory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FGameplayTagContainer Tags;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		USoundCue* PickupAudio;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Inventory")
		EHUDMarkerType MarkerType;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	//	USoundWave* AudioData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		EInteractAnimType InteractAnimType;


};
