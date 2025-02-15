// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivalPlayerCharacter.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ASurvivalPlayerCharacter::ASurvivalPlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaminaComponent = CreateDefaultSubobject<UStaminaComponent>("StaminaComponent");
	SurvivalComponent = CreateDefaultSubobject<USurvivalComponent>("SurvivalComponent");
	EquipmentComponent = CreateDefaultSubobject<UEquipmentComponent>("EquipmentComponent");
	HaulingComponent = CreateDefaultSubobject<UHaulingComponent>("HaulingComponent");
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>("InventoryComponent");
	this->BuildingPlacementComponent = CreateDefaultSubobject<UBuildingPlacementComponent>(TEXT("BuildingPlacementComponent"));
}
void ASurvivalPlayerCharacter::EnterPlaceBuildingMode(FDataTableRowHandle BuildingData, bool bAutoAddIngredients, bool bDeployable)
{
}
void ASurvivalPlayerCharacter::ExitPlaceBuildingMode(bool bSuccess)
{
}
void ASurvivalPlayerCharacter::ServerThrowItem()
{
}
void ASurvivalPlayerCharacter::ServerStartThrow()
{
}
void ASurvivalPlayerCharacter::ServerReleaseThrow()
{
}
void ASurvivalPlayerCharacter::ServerReleaseAttack()
{
}
// Called when the game starts or when spawned
void ASurvivalPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASurvivalPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASurvivalPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


