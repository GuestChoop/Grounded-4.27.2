// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"

UItem::UItem()
{

}

FBaseItemData UItem::GetItemData(){ return FBaseItemData{}; }
bool UItem::IsEquipped() { return false; }