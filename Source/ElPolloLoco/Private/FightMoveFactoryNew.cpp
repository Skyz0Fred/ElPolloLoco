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

