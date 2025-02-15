// Fill out your copyright notice in the Description page of Project Settings.


#include "Building.h"
#include <Net/UnrealNetwork.h>

// Sets default values
ABuilding::ABuilding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ABuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABuilding, BuildingState);
}

void ABuilding::OnRep_BuildingStateChanged(EBuildingState OldState){}
void ABuilding::UpdateCollisionStateChange(){}
void ABuilding::SetUnderConstruction(){}
void ABuilding::StartPlacementMode(){}
void ABuilding::ServerStartPlacementMode(){}

void ABuilding::SetStencilOnBuildingStateChanged(AActor* InInstigator, EBuildingState NewState)
{
	OnBuildingStateChangedDelegate.RemoveAll(this);
}

void ABuilding::SelfComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

void ABuilding::SelfComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void ABuilding::K2_HandleBuildingStateChanged(EBuildingState NewState, AActor* InstigatedBy)
{

}

void ABuilding::Use(EInteractionChannel Channel, AActor* InstigatedBy)
{
}

void ABuilding::UnsetPlacedThisFrame()
{
}

void ABuilding::UpdateAllMaterials()
{
}
