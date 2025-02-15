// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Building.h"
#include "Engine/DataTable.h"
#include "BuildingErrorDelegateDelegate.h"
#include "BuildingDelegateDelegate.h"
#include "EBuildingPlacementFlags.h"
#include "BuildingPlacementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup = Custom, meta = (BlueprintSpawnableComponent))
class MAINE_API UBuildingPlacementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBuildingPlacementComponent();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
		ABuilding* PendingBuilding;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building", meta = (AllowPrivateAccess = true))
		float ValidSlotScore;
	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
		FBuildingErrorDelegate OnBuildingErrorChanged;
	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
		FBuildingDelegate OnBuildingVariantChanged;
	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
		FBuildingDelegate OnPendingClassChanged;
	UFUNCTION(BlueprintCallable, Category = "Building")
		void EnterPlaceBuildingMode(FDataTableRowHandle BuildingData, bool bAutoAddIngredients, bool bDeployable);
	UFUNCTION(BlueprintCallable, Category = "Building")
		void ServerEnterPlaceBuildingMode(FDataTableRowHandle BuildingData, EBuildingPlacementFlags Flags);
	UFUNCTION(BlueprintCallable, Category = "Building")
		void ServerSetFlipPlacementMode(bool bFlipMode);
	UFUNCTION(BlueprintCallable, Category = "Building")
		void ServerSetAlternatePlacementMode(bool bAlternateMode);
	UFUNCTION(BlueprintCallable, Category = "Building")
		void ServerSetRepeatPlacementMode(bool bRepeatMode);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
