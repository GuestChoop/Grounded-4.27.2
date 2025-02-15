// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	MaxSize = 0;

	// ...
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

//void UInventoryComponent::ServerTransferItemTo_Implementation(UItem* Item, UInventoryComponent* ToInventory, int32 Count, bool MatchItemSlot) {
//}
//
//bool UInventoryComponent::ServerTransferItemTo_Validate(UItem* Item, UInventoryComponent* ToInventory, int32 Count, bool MatchItemSlot) {
//	return true;
//}