// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivalGameStateComponent.h"
#include "SpawnedItem.h"
#include "EHUDMarkerType.h"
#include "BaseLODActor.h"
#include "HUDMarkerData.h"
#include "HUDMarkerManagerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINE_API UHUDMarkerManagerComponent : public USurvivalGameStateComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHUDMarkerManagerComponent();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "HUD")
		TArray<ASpawnedItem*> RegisteredSpawnedItems;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "HUD")
		TArray<UHUDMarkerData*> ReplicatedMarkerList;
    UFUNCTION(BlueprintCallable, Category = "HUD")
        void K2_RegisterActor(AActor* Actor, FDataTableRowHandle Quest, FDataTableRowHandle AdditionalData, EHUDMarkerType MarkerType, int32 IconVariant, int32 ColorVariant, bool ShowDistance, float Lifetime);
    UFUNCTION(BlueprintCallable, Category = "HUD")
        void DeregisterActorMarker(AActor* ActorToDeregister, EHUDMarkerType MarkerType);
    UFUNCTION(BlueprintCallable, Category = "HUD")
        void DeregisterActor(AActor* Actor);
    UFUNCTION(BlueprintCallable, Category = "HUD")
        void AddStartingMarkers();
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void ToggleShowFarHUDMarkers();
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void RegisterItemObjectiveMarker(FDataTableRowHandle ItemDataRowHandle, FDataTableRowHandle Quest, bool ShowDistance, float Lifetime);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void K2_RegisterLODActor(UBaseLODActor* Actor, FDataTableRowHandle Quest, FDataTableRowHandle AdditionalData, EHUDMarkerType MarkerType, int32 IconVariant, int32 ColorVariant, bool ShowDistance, float Lifetime);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void RegisterLocationMarker(const FString& MarkerTag, FDataTableRowHandle Quest, FVector Location, EHUDMarkerType MarkerType, bool ShowDistance, float Lifetime);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
