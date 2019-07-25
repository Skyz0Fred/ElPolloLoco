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

 //Types Of Attacks - added later in the data asset to distinguish attacks
UENUM()
enum AttackTypes
{
	GroundAttack UMETA(DisplayName = "Ground Attack"),
	AirAttack UMETA(DisplayName = "Air Attack"),
	ChargeAttack UMETA(DisplayName = "Charge Attack"),
	SprintAttack UMETA(DisplayName = "Sprint Attack"),
	FinishingAttack UMETA(DisplayName = "Finishing Attack")
};


UCLASS(BlueprintType, hidecategories=(Object), DisplayName="El Pollo Fight Move")
//class ELPOLLOLOCO_API UFightMove: public UObject
class ELPOLLOLOCO_API UFightMove : public UDataAsset
{
	GENERATED_BODY()

private:
		FString someString = "Something";
		enum AttackType;

public:
	//Name Of Attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightMove")
	FString AttackName = "AttackName";
	
	/*Displays any UClasses driving from UAnimSequence in a dropdown menu in Blueprints
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FightMove")
	TSubclassOf<UAnimSequence> Animation; 
	*/

	/*Level Of Attack
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightMove")
	int Level = 1;

	//Animation asset to use for move
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightMove")
	UAnimSequence *Animation = nullptr;

	//Damage inflicted by move
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightMove")
	float DamageInflicted = 0.0f;
	
	//Attack type defined in enum
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightMove")
		TEnumAsByte<AttackTypes> AttackType;

	/*Displays any blueprints derived from that code class
	UPROPERTY(EditAnywhere, meta=(MetaClass = "UserDefinedEnum"), Category = "FightMove") 
	FStringClassReference Enum;
	*/
	
	//Cooldown Before Next Attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightMove")
	float CooldownBeforeNext = 0.0f;

};