// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseBuildingData.h"

FBaseBuildingData::FBaseBuildingData()
    :
     Icon(),
     bBaseBuilding(false),
     //WaveDamageScore(0),
     SlotType(EBuildingSlotType()),
     bUseAlternateSlotType(false),
     AlternateSlotType(EBuildingSlotType()),
    // EmbedMode(EBuildingGroundEmbedMode()),
     bPlaceAtPlayerRotation(false),
     bRotateRandom(false),
     bAllowPlaceInWater(false),
    // BuoyantPlacement = (EBuildingBuoyantPlacementMode)140702511572320;
     FreeBuildingPlacementDistance(0),
     BuildingWallMountPlacementDistance(0),
     BuildingCeilingMountPlacementDistance(0),
     bDoOverrideAllowedWallNormal(false),
     CozinessContribution(0),
     CozinessAdditionalContribution(0),
     bCozinessStructural(false),
     bModelViewerAddOverheadSpotlight(false)
{}

