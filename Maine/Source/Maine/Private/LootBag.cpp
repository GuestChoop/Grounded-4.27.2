// Fill out your copyright notice in the Description page of Project Settings.


#include "LootBag.h"

// Sets default values
ALootBag::ALootBag()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
}

// Called when the game starts or when spawned
void ALootBag::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALootBag::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

