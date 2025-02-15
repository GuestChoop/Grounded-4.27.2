// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivalCharacter.h"

// Sets default values
ASurvivalCharacter::ASurvivalCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	HealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");
	AttackHandlerComponent = CreateDefaultSubobject<UAttackHandlerComponent>("AttackHandlerComponent");
	AttractionComponent = CreateDefaultSubobject<UAttractionComponent>("AttractionComponent");
	BlockComponent = CreateDefaultSubobject<UBlockComponent>("BlockComponent");
	ReactionComponent = CreateDefaultSubobject<UReactionComponent>("ReactionComponent");
	StatusEffectComponent = CreateDefaultSubobject<UStatusEffectComponent>("StatusEffectComponent");
	LootComponent = CreateDefaultSubobject<ULootComponent>("LootComponent");
	CharMovementComponent = CreateDefaultSubobject<UMaineCharMovementComponent>("CharMovement");
	SwimAttackCombo = NULL;
	DefaultAttackCombo = NULL;
}

// Called when the game starts or when spawned
void ASurvivalCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASurvivalCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASurvivalCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UCameraComponent* ASurvivalCharacter::GetCurrentCamera() { return NewObject<UCameraComponent>(); }
void ASurvivalCharacter::OnUnderwaterChanged(bool bIsUnderwater){}
void ASurvivalCharacter::ServerPlayAnimMontage(UAnimMontage* AnimMontage, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType){}
//void ASurvivalCharacter::TogglePawnBlockers(bool bEnabled)
//{
//}
void ASurvivalCharacter::ServerEndBlock(bool FromInput)
{
}
void ASurvivalCharacter::MulticastPlayAnimMontage(UAnimMontage* AnimMontage, bool bLockCharacter, ECharacterAnimMontageType AnimMontageType)
{
}
void ASurvivalCharacter::ServerStartAttack(EAttackType AttackType) {}
void ASurvivalCharacter::OnRep_IsAttacking() {}

void ASurvivalCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
}
