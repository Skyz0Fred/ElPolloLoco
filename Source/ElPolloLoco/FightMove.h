// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Object.h"
#include "FightMove.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, hidecategories=(Object))
class ELPOLLOLOCO_API UFightMove: public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "FightMove")
		FString AttackName = "";
		float Damage = 0.0f;
		float CooldownBeforeNext = 0.0f;

};
