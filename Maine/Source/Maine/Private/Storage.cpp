// Fill out your copyright notice in the Description page of Project Settings.


#include "Storage.h"

AStorage::AStorage() {
    InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
}