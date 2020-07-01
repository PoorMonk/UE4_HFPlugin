// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HFMMInterface.h"
#include "HFMessage.generated.h"

/**
 * 
 */
UCLASS()
class HFDATADRIVEN_API UHFMessage : public UObject, public IHFMMInterface
{
	GENERATED_BODY()
	
public:

	virtual void MessageInit();
	virtual void MessageBeginPlay();
	virtual void MessageTick(float DeltaSeconds);
};
