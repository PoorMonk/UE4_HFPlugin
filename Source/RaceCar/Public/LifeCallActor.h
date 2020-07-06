// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HFObject/HFActor.h"
#include "HFCommon/HFDefine.h"
#include "LifeCallActor.generated.h"

/**
 * 
 */
UCLASS()
class RACECAR_API ALifeCallActor : public AHFActor
{
	GENERATED_BODY()
	
public:
	virtual void HFInit() override;
	virtual void HFLoading() override;
	virtual void HFRegister() override;
	virtual void HFEnable() override;
	virtual void HFTick(float DeltaSeconds) override;

	virtual void HFDisable() override;
	virtual void HFUnRegister() override;
	virtual void HFUnLoading() override;
	virtual void HFRelease() override;

	UFUNCTION()
		void AcceptCall(FString InfoStr);

protected:
	int32 TimeCounter;

	HFMODFUNC_THREE(TestReflect, int32, Counter, FString, InfoStr, bool, BackResult);

	HFMODFUNC(TestNoParam);
};
