// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "HFOOInterface.h"
#include "HFLevelScriptActor.generated.h"

/**
 * 
 */
UCLASS()
class HFDATADRIVEN_API AHFLevelScriptActor : public ALevelScriptActor, public IHFOOInterface
{
	GENERATED_BODY()
	
public:
	AHFLevelScriptActor();

public:
	UPROPERTY(EditAnywhere, Category = "HFDataDriven")
		FName ModuleName;

	UPROPERTY(EditAnywhere, Category = "HFDataDriven")
		FName ObjectName;

	UPROPERTY(EditAnywhere, Category = "HFDataDriven")
		FName ClassName;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};