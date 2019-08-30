// Fill out your copyright notice in the Description page of Project Settings.


#include "FightMoveAssetActions.h"
#include "FightMove.h"
#include "Styling/SlateStyle.h"

/*
* Fight Move Asset Action Constructor
*/

FFightMoveAssetActions::FFightMoveAssetActions (const TSharedRef<ISlateStyle> &InStyle): Style(InStyle){}

/*
* FAssetTypeActions_Base overrides
*/

bool FFightMoveAssetActions::CanFilter()
{
	return true;
}

uint32 FFightMoveAssetActions::GetCategories()
{
	return EAssetTypeCategories::Misc;
}

FText FFightMoveAssetActions::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_FightMove", "Fight Move");
}

UClass* FFightMoveAssetActions::GetSupportedClass() const
{
	return UFightMove::StaticClass();
}

FColor FFightMoveAssetActions::GetTypeColor() const
{
	return FColor::Black;
}
/*
bool FFightMoveAssetActions::HasActions(TArray<FFightMoveAssetActions>) const
{
	return true;
}

FText FFightMoveAssetActions::GetAssetDescription() const
{
	FString* text = "Fight Move For El Pollo";
	return FText::FromString(text);
}
*/
