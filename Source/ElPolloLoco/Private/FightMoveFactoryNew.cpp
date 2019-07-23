// Fill out your copyright notice in the Description page of Project Settings.


#include "FightMoveFactoryNew.h"
#include "FightMove.h"

// UFightMoveAssetFactoryNew structors

UFightMoveFactoryNew::UFightMoveFactoryNew(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	SupportedClass = UFightMove::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

//UFactory Overrides

UObject* UFightMoveFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UFightMove>(InParent, InClass, InName, Flags);
}

bool UFightMoveFactoryNew::ShouldShowInNewMenu() const
{
	return true;
}

