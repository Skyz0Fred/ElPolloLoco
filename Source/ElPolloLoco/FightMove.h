// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "Object.h"
#include "Engine/DataAsset.h"
#include "Classes/Animation/AnimSequence.h"
#include "FightMove.generated.h"


/*
 Fight Move asset that will be used as a scalable solution for comboing things together. 
 */

 /*	Types Of Attacks - added later in the data asset to distinguish attacks
	Finishing Attacks are based on enemy's health
	The rest is pretty self-explanatory.
 */
UENUM()
enum EAttackTypes
{
	GroundAttack UMETA(DisplayName = "Ground Attack"),
	AirAttack UMETA(DisplayName = "Air Attack"),
	ChargeAttack UMETA(DisplayName = "Charge Attack"),
	SprintAttack UMETA(DisplayName = "Sprint Attack"),
	FinishingAttack UMETA(DisplayName = "Finishing Attack")
};

USTRUCT(BlueprintType)
struct FFightMoveStruct
{
	GENERATED_BODY()

	//Name Of Attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString AttackName = "AttackName";

	//Boolean for grab attacks
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsGrabAttack = false;

	//Level Of Attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Level = 1;

	//Animation asset to use for move
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAnimSequence *Animation = nullptr;

	//Damage inflicted by move
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float DamageInflicted = 0.0f;

	//Attack type defined in enum
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EAttackTypes> AttackType;

	//Cooldown Before Next Attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CooldownBeforeNext = 0.0f;

	//Particle Generated On Impact
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UParticleSystem *ImpactParticle = nullptr;
};

UCLASS(BlueprintType, DisplayName="El Pollo Fight Move")
//class ELPOLLOLOCO_API UFightMove: public UObject
class ELPOLLOLOCO_API UFightMove : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta = (ShowOnlyInnerProperties))
		FFightMoveStruct FightMove;
};