// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Building.h"
#include "LocString.h"
#include "EBuildingSlotType.h"
//#include "GameplayTagContainer.h"
#include "BaseBuildingData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FBaseBuildingData : public FTableRowBase
{

    GENERATED_BODY()

        FBaseBuildingData();

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        FLocString LocalizedDisplayName;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    FLocString LocalizedWildcardDisplayName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        TArray<FLocString> SearchableKeywords;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        FLocString LocalizedDescription;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        UTexture2D* Icon;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    UObject* ModIcon;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    int32 Heat;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        bool bBaseBuilding;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    float WaveDamageScore;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        TSoftClassPtr<ABuilding> BuildingActor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        TSoftClassPtr<ABuilding> BuildingActorFlipped;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        TSoftClassPtr<ABuilding> BuildingActorDiagonal;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        TSoftClassPtr<ABuilding> BuildingActorWall;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        TSoftClassPtr<ABuilding> BuildingActorCeiling;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        EBuildingSlotType SlotType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        bool bUseAlternateSlotType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        EBuildingSlotType AlternateSlotType;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    EBuildingGroundEmbedMode EmbedMode;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        bool bPlaceAtPlayerRotation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        bool bRotateRandom;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        bool bAllowPlaceInWater;

    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    EBuildingBuoyantPlacementMode BuoyantPlacement;

    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        float FreeBuildingPlacementDistance;

    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        float BuildingWallMountPlacementDistance;

    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        float BuildingCeilingMountPlacementDistance;

    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        FVector PlacementOriginOffset;

    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        bool bDoOverrideAllowedWallNormal;

    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        FFloatRange OverrideAllowedWallNormal;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        int32 CozinessContribution;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        float CozinessAdditionalContribution;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        bool bCozinessStructural;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        TSoftObjectPtr<UStaticMesh> ModelViewerMeshOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        TArray<UMaterialInterface*> ModelViewerMaterialsOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Building")
        bool bModelViewerAddOverheadSpotlight;

    //UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    //    TArray<FBuildingPivotUpdate> PivotUpdateHistory;
};

