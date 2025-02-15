// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBuildingGridSurfaceType.h"
#include "EBuildingState.h"
#include "EBuildingTerrainConformMode.h"
#include "EInteractionChannel.h"
#include "OnBuildingStateChangedDelegate.h"
#include <Engine/DataTable.h>
#include "Building.generated.h"


UCLASS(Blueprintable)
class MAINE_API ABuilding : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilding();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
		FDataTableRowHandle BuildingData;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
		float MaxSlope;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true), Category = "Building")
		EBuildingGridSurfaceType AnchoredSurface;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing = OnRep_BuildingStateChanged, meta = (AllowPrivateAccess = true), Category = "Building")
		EBuildingState BuildingState;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
		EBuildingTerrainConformMode TerrainConform;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
		UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta = (AllowPrivateAccess = true), Category = "Building")
		TArray<UMeshComponent*> MeshList;
	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
		FOnBuildingStateChanged OnBuildingStateChangedDelegate;
	UFUNCTION(BlueprintCallable, Category = "Building")
		void OnRep_BuildingStateChanged(EBuildingState OldState);
	UFUNCTION(BlueprintCallable, Category = "Building")
		void UpdateCollisionStateChange();
	UFUNCTION(BlueprintCallable, Category = "Building")
		void SetUnderConstruction();
	UFUNCTION(BlueprintCallable, Category = "Building")
		void StartPlacementMode();
	UFUNCTION(BlueprintCallable, Category = "Building")
		void ServerStartPlacementMode();
	UFUNCTION(BlueprintCallable, Category = "Building")
		void SetStencilOnBuildingStateChanged(AActor* InInstigator, EBuildingState NewState);
	UFUNCTION(BlueprintCallable, Category = "Building")
		void SelfComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	UFUNCTION(BlueprintCallable, Category = "Building")
		void SelfComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable, Category = "Building")
		void K2_HandleBuildingStateChanged(EBuildingState NewState, AActor* InstigatedBy);
	UFUNCTION(BlueprintCallable)
		void Use(EInteractionChannel Channel, AActor* InstigatedBy);
	UFUNCTION(BlueprintCallable, Category = "Building")
		void UnsetPlacedThisFrame();
	UFUNCTION(BlueprintCallable, Category = "Building")
		void UpdateAllMaterials();

};
