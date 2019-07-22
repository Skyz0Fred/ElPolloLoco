// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Object.h"
#include "FightMove.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, hidecategories=(Object))
class ELPOLLOLOCO_API UFightMove: public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Category = "FightMove")
	FString AttackName = "";
	UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Category = "FightMove")
	float Damage = 0.0f;
	UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Category = "FightMove")
	float CooldownBeforeNext = 0.0f;

};