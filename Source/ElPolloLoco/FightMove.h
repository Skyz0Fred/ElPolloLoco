// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "Object.h"
#include "Engine/DataAsset.h"
#include "Classes/Animation/AnimSequence.h"
#include "FightMove.generated.h"


/**
 * 
 */
UCLASS(BlueprintType, hidecategories=(Object))
//class ELPOLLOLOCO_API UFightMove: public UObject
class ELPOLLOLOCO_API UFightMove : public UDataAsset
{
	GENERATED_BODY()

private:
		FString someString = "Something";

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightMove")
	FString AttackName = "AttackName";
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FightMove")
	TSubclassOf<UAnimSequence> Animation; //Displays any UClasses driving from UAnimSequence in a dropdown menu in Blueprints
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightMove")
	float DamageInflicted = 0.0f;
	
	UPROPERTY(EditAnywhere, meta=(MetaClass = "UserDefinedEnum"), Category = "FightMove") //Displays any blueprints derived from that code class
	FStringClassReference Enum; 
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightMove")
	float CooldownBeforeNext = 0.0f;

};