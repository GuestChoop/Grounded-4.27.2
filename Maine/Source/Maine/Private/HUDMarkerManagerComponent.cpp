// Fill out your copyright notice in the Description page of Project Settings.


#include "HUDMarkerManagerComponent.h"

// Sets default values for this component's properties
UHUDMarkerManagerComponent::UHUDMarkerManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHUDMarkerManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHUDMarkerManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHUDMarkerManagerComponent::K2_RegisterActor(AActor* Actor, FDataTableRowHandle Quest, FDataTableRowHandle AdditionalData, EHUDMarkerType MarkerType, int32 IconVariant, int32 ColorVariant, bool ShowDistance, float Lifetime){}
void UHUDMarkerManagerComponent::DeregisterActorMarker(AActor* ActorToDeregister, EHUDMarkerType MarkerType){}
void UHUDMarkerManagerComponent::DeregisterActor(AActor* Actor){}
void UHUDMarkerManagerComponent::AddStartingMarkers(){}
void UHUDMarkerManagerComponent::ToggleShowFarHUDMarkers(){}
void UHUDMarkerManagerComponent::RegisterItemObjectiveMarker(FDataTableRowHandle ItemDataRowHandle, FDataTableRowHandle Quest, bool ShowDistance, float Lifetime){}
void UHUDMarkerManagerComponent::K2_RegisterLODActor(UBaseLODActor* Actor, FDataTableRowHandle Quest, FDataTableRowHandle AdditionalData, EHUDMarkerType MarkerType, int32 IconVariant, int32 ColorVariant, bool ShowDistance, float Lifetime){}
void UHUDMarkerManagerComponent::RegisterLocationMarker(const FString& MarkerTag, FDataTableRowHandle Quest, FVector Location, EHUDMarkerType MarkerType, bool ShowDistance, float Lifetime){}





