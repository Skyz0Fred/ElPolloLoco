// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "FightMoveFactoryNew.generated.h"

/**
 * 
 */
UCLASS()
class UFightMoveFactoryNew : public UFactory
{
	GENERATED_UCLASS_BODY()

public:
	UFightMoveFactoryNew();
	//~UFactory Interface
	//virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	//virtual bool ShouldShowInNewMenu() const override;
	
};
