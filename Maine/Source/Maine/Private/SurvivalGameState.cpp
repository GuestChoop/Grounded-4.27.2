// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivalGameState.h"

ASurvivalGameState::ASurvivalGameState()
{
	this->SurvivalModeManagerComponent = CreateDefaultSubobject<USurvivalModeManagerComponent>(TEXT("SurvivalModeManagerComponent"));
	this->HUDMarkerManagerComponent = CreateDefaultSubobject<UHUDMarkerManagerComponent>(TEXT("HUDMarkerManagerComponent"));
}
