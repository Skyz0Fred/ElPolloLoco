// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FightMoveAssetActions.h"
#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"

class ISlateStyle;

/**
 * Implements actions for UFightMove assets.
 */

class FFightMoveAssetActions : public FAssetTypeActions_Base
{
public:

	/*
	* Creates and initializes a new instance.
	* InStyle - The style set to use for asset editor toolkits.
	*/
	FFightMoveAssetActions(const TSharedRef<ISlateStyle>& InStyle);

public:

	//FAssetTypeActions_Base overrides

	virtual bool CanFilter() override;
	//Not needed
	//virtual void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) override;
	virtual uint32 GetCategories() override;
	virtual FText GetName() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual FColor GetTypeColor() const override;
	//virtual bool HasActions(const TArray<UObject*>& InObjects) const override;
	//virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;
	//virtual FText GetAssetDescription() override;

private:
	/*
	Pointer to the style set to use for toolkits.
	*/
	TSharedRef<ISlateStyle> Style;
};