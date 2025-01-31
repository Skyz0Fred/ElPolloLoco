// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Classes/Animation/AnimSequence.h"
#include "Classes/Camera/CameraShake.h"
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
	FinishingAttack UMETA(DisplayName = "Finishing Attack")
};

USTRUCT(BlueprintType)
struct FFightMoveStruct
{
	GENERATED_BODY()

	//Name Of Attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString AttackName = "AttackName";

	//Boolean for identifying default attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsDefaultAttack = false;

	//Boolean for grab attacks
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsGrabAttack = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsSprintAttack = false;

	//Level Of Attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Level = 1;

	//Animation asset to use for move
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAnimSequence *Animation = nullptr;

	//Damage inflicted by move
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float DamageInflicted = 1.0f;

	//Distance of move damage zone.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MoveForwardReach = 100.0f;

	//Distance of move damage zone.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MoveLateralReach = 100.0f;

	//Distance of move damage zone.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MoveUpwardReach = 100.0f;

	//Attack type defined in enum
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EAttackTypes> AttackType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(EditCondition="IsSprintAttack"))
		float SprintingAttackDistance = 0.0f;

	//Particle Generated On Impact
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UParticleSystem *ImpactParticle = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool HasCameraShake = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "HasCameraShake"))
		TSubclassOf<UCameraShake> CameraShake = nullptr;
};

UCLASS(BlueprintType, DisplayName="El Pollo Fight Move")
class ELPOLLOLOCO_API UFightMove : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ShowOnlyInnerProperties))
		FFightMoveStruct FightMove;
};