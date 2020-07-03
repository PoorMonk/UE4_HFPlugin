// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HFOOInterface.h"
#include "HFPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class HFDATADRIVEN_API AHFPlayerController : public APlayerController, public IHFOOInterface
{
	GENERATED_BODY()
	
public:
	AHFPlayerController();

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
