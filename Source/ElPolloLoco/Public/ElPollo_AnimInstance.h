// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Interface_Anim.h"
#include "ElPollo_AnimInstance.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class ELPOLLOLOCO_API UElPollo_AnimInstance : public UAnimInstance, public IInterface_Anim
{
	GENERATED_BODY()
	
};
