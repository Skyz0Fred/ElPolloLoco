// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ElPollo_InterfaceAnim.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType, MinimalAPI)
class UElPollo_InterfaceAnim : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ELPOLLOLOCO_API IElPollo_InterfaceAnim
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "El Pollo Anim")
	void Jumping();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "El Pollo Anim")
	void Flinching();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "El Pollo Anim")
	void Grabbing();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "El Pollo Anim")
	void Dropping();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "El Pollo Anim")
	void Throwing();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "El Pollo Anim")
	void AirAttacking();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "El Pollo Anim")
	void Attacking();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "El Pollo Anim")
	void SprintAttacking();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "El Pollo Anim")
	void AttackBegin();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "El Pollo Anim")
	void AttackEnd();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "El Pollo Anim")
	void ComboCancel();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "El Pollo Anim")
	void ComboLink();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "El Pollo Anim")
	void CancelAttackForMove();
};
