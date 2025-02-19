// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseItemData.h"

FBaseItemData::FBaseItemData()
	:
	bWorldMarker(false),
	TwoHanded(false),
	bIsLightSource(false),
	bCanBlock(false),
	bBurgleQuestCanAnalyze(false),
	Tier(0),
	Stance(0),
	BurgleQuestAnalyzeRewardLevel(0),
	LocalizedDisplayName(FLocString()),
	LocalizedDescription(FLocString()),
	StackSizeTag(FGameplayTag()),
	RarityTag(FGameplayTag()),
	EquippableData(FEquippableData()),
	AttackComboData(FAttackComboData()),
	AlternateAttackComboData(FAttackComboData()),
	SwimmingAttackComboData(FAttackComboData()),
	HaulingData(FHaulingData()),
	SpoilData(FSpoilData()),
	ThrowData(FThrowData()),
	PowerData(FItemPowerData()),
	InspectData(FInspectData()),
	GlidingData(FGlidingData()),
	ResourceCategory(FGameplayTagContainer()),
	Tags(FGameplayTagContainer()),
	ItemType(EItemType()),
	Slot(EEquipmentSlot()),
	OverrideEquipSocket(ESocketName()),
	ConsumeAnimType(EInteractAnimType()),
	InteractAnimType(EInteractAnimType()),
	Icon(),
	ConsumeAudio(),
	//OverrideTemplateConsumeAction(),
	ProcessingActorOverride(),
	PickupAudio(),
	//AudioData(),
	SearchableKeywords(),
	UnlockRecipes(),
	ResearchUnlockRecipes(),
	TechTreeUnlocks(),
	WorldActor(),
	EquippedActor(),
	AmmoAttackData(),
	ConsumableData(),
	ProcessingOptions(),
	MarkerType(EHUDMarkerType())
{}
