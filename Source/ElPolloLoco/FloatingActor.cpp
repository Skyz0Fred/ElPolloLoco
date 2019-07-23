// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingActor.h"

// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();

	//Test log on begin play.
	BeginPlay_DisplayDebug();

	//Test for formatting text.
	BeginPlay_FormatText();

}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * DeltaHeightFactor; //Scale our height by a factor of 20
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);

	//test for outputting to log on every tick - works.
	//UE_LOG(LogTemp, Warning, TEXT("Text, %d %f %s"), testInt, testFloat, *testName);
}

void AFloatingActor::BeginPlay_DisplayDebug()
{
	UE_LOG(LogTemp, Warning, TEXT("An floating actor was created."));
	UE_LOG(LogTemp, Error, TEXT("String= %s"), *testString);
}

void AFloatingActor::BeginPlay_FormatText()
{
	//Array of arguments for formatting
	TArray<FStringFormatArg> args;
	args.Add(FStringFormatArg(testName));
	args.Add(FStringFormatArg(testInt));
	FString forstring = FString::Format(TEXT("Name = { 0 } Mana = { 1 }"), args);
	UE_LOG(LogTemp, Warning, TEXT("Your string: %s"), *forstring);
}

