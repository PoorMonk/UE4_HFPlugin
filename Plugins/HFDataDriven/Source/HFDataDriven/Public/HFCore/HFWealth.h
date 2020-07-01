// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HFMMInterface.h"
#include "HFWealth.generated.h"

/**
 * 
 */
UCLASS()
class HFDATADRIVEN_API UHFWealth : public UObject, public IHFMMInterface
{
	GENERATED_BODY()
	
public:

	virtual void WealthInit() {}
	virtual void WealthBeginPlay();
	virtual void WealthTick(float DeltaSeconds);
};
