// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HFMMInterface.h"
#include "HFModel.generated.h"

/**
 * 
 */
UCLASS()
class HFDATADRIVEN_API UHFModel : public UObject, public IHFMMInterface
{
	GENERATED_BODY()
	
public:

	virtual void ModelInit() {}
	virtual void ModelBeginPlay() {}
	virtual void ModelTick(float DeltaSeconds);
};
