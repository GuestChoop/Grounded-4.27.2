// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StaminaComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINE_API UStaminaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStaminaComponent();

	//UFUNCTION(BlueprintCallable, BlueprintPure, Category = "StaminaComponent")
	//	float GetCurrentStamina();
	//UFUNCTION(BlueprintCallable, Category = "StaminaComponent")
	//	void SetCurrentStamina(float DesiredStamina);
	//UFUNCTION(BlueprintCallable, BlueprintPure, Category = "StaminaComponent")
	//	float GetStaminaToHungerRatio();
	//UFUNCTION(BlueprintCallable, BlueprintPure, Category = "StaminaComponent")
	//	float GetRegenRate();
	//UFUNCTION(BlueprintCallable, BlueprintPure, Category = "StaminaComponent")
	//	float GetRegenDelay();
	//UFUNCTION(BlueprintCallable, BlueprintPure, Category = "StaminaComponent")
	//	float GetMaxStaminaMedium();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StaminaComponent")
		float StaminaToHungerRatio;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StaminaComponent")
		float RegenRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StaminaComponent")
		float RegenDelay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StaminaComponent")
		float MaxStamina;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StaminaComponent")
		float CurrentStamina;

};
