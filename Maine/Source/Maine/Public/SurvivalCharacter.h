// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <Maine\Public\AttackHandlerComponent.h>
#include <Maine\Public\AttractionComponent.h>
#include <Maine\Public\BlockComponent.h>
#include <Maine\Public\HealthComponent.h>
#include <Maine\Public\ReactionComponent.h>
#include <Maine\Public\StatusEffectComponent.h>
#include <Maine/Public/LootComponent.h>
#include "AttackComboData.h"
#include "EAttackType.h"
#include "ECharacterAnimMontageType.h"
#include "MaineCharMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "AttackCombo.h"
#include "AttackDelegateDelegate.h"
//#include <OEICommon/Public/ObsidianIDComponent.h>
#include "SurvivalCharacter.generated.h"

UCLASS()
class MAINE_API ASurvivalCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASurvivalCharacter();

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Survival Component")
		FAttackDelegate OnAttackLaunch;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing = OnRep_IsAttacking, meta = (AllowPrivateAccess = true), Category = "Survival Component")
		uint8 bIsAttacking : 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UHealthComponent* HealthComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UAttackHandlerComponent* AttackHandlerComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UAttractionComponent* AttractionComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UBlockComponent* BlockComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UReactionComponent* ReactionComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
		UStatusEffectComponent* StatusEffectComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta = (AllowPrivateAccess = true), Category = "Survival Component")
		ULootComponent* LootComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Survival Component")
		FAttackComboData SwimAttackComboData;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true), Category = "Survival Component")
		UAttackCombo* DefaultAttackCombo;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true), Category = "Survival Component")
		UAttackCombo* SwimAttackCombo;
	UFUNCTION(BlueprintCallable, Category = "Survival Component")
		void OnUnderwaterChanged(bool bIsUnderwater);
	UFUNCTION(BlueprintCallable, Category = "Survival Component")
		void ServerStartAttack(EAttackType AttackType);
	UFUNCTION(BlueprintCallable, Category = "Survival Component")
		void ServerPlayAnimMontage(UAnimMontage* AnimMontage, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Survival Component")
		void TogglePawnBlockers(bool bEnabled);
	UFUNCTION(BlueprintCallable, Category = "Survival Component")
		void ServerEndBlock(bool FromInput);
	UFUNCTION(BlueprintCallable, Category = "Survival Component")
		void MulticastPlayAnimMontage(UAnimMontage* AnimMontage, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType);
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true), Category = "Survival Component")
		UMaineCharMovementComponent* CharMovementComponent;
	UFUNCTION(BlueprintCallable)
		void OnRep_IsAttacking();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival Component")
	//	UObsidianIDComponent* ObsidianIDComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = "HealthComponent")
		UCameraComponent* GetCurrentCamera();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
