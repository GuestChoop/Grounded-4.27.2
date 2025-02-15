// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Item.h"
#include "InventoryComponent.generated.h"


UCLASS(Blueprintable, ClassGroup = Custom, meta = (BlueprintSpawnableComponent))
class MAINE_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InventoryComponent")
		int32 MaxSize;

	//UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
	//	void ServerTransferItemTo(UItem* Item, UInventoryComponent* ToInventory, int32 Count, bool MatchItemSlot);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
