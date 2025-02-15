// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "Item.h"
#include "SpawnedItem.generated.h"

UCLASS()
class MAINE_API ASpawnedItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnedItem();
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	//	UObsidianIDComponent* ObsidianIDComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Item")
		FDataTableRowHandle PlacedItemData;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Item")
		UItem* Item;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Item")
		uint8 bInteractOnTouch : 1;
	UFUNCTION(BlueprintCallable, Category = "Item")
		void HandleTouch(AActor* Actor);
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true), Category = "Item")
		uint8 bIsThrown : 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		uint8 bCanAiInteract : 1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
