// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class ELPOLLOLOCO_API AFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	void BeginPlay_DisplayDebug();
	void BeginPlay_FormatText();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	float RunningTime;
	UPROPERTY(EditAnywhere)
	float DeltaHeightFactor = 20.0f;

private:
	//Test variables for printing and formatting
	float testFloat = 200.0f;
	int32 testInt = 5;
	FString testName = "Roger";

	//Print string variable
	FString testString = FString::Printf(TEXT("Name = %s Mana= %d"), *testName, testInt);

};
