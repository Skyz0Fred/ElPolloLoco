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

public:

	//Grab montage duration that we use for delays
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GrabDuration = 0.0f;
	
};
