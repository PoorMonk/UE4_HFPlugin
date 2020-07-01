// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HFDefine.h"
#include "HFCommon.generated.h"

namespace HFH
{
	FORCEINLINE HFRecord& Debug(float time = 3000.f, FColor color = FColor::Yellow)
	{
		HFRecord::Get()->PatternID = 0;
		HFRecord::Get()->InitParam(time, color);
		return *HFRecord::Get();
	}

	FORCEINLINE HFRecord& Debug(FColor color)
	{
		return Debug(3000.f, color);
	}

	FORCEINLINE HFRecord& Log()
	{
		HFRecord::Get()->PatternID = 1;
		return *HFRecord::Get();
	}

	FORCEINLINE HFRecord& Warning()
	{
		HFRecord::Get()->PatternID = 2;
		return *HFRecord::Get();
	}

	FORCEINLINE HFRecord& Error()
	{
		HFRecord::Get()->PatternID = 3;
		return *HFRecord::Get();
	}

	FORCEINLINE HFRecord& Endl()
	{
		return *HFRecord::Get();
	}
}

/**
 * 
 */

class AHFDriver;

UCLASS()
class HFDATADRIVEN_API UHFCommon : public UObject
{
	GENERATED_BODY()
	
public:
	static UHFCommon* Get();

	void InitDriver(AHFDriver* InDriver);
	AHFDriver* GetDriver();

private:
	static UHFCommon* HFComInst;
	AHFDriver* Driver;
};
