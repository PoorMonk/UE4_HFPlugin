// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HFDefine.h"
#include "HFGame/HFGCommon.h"
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

	//���봫���Enumֵ��Ӧ��FString
	template<typename TEnum>
	FORCEINLINE FString GetEnumValueAsString(const FString& Name, TEnum Value)
	{
		const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, *Name, true);
		if (!EnumPtr)
		{
			return FString("Invalid");
		}
		return EnumPtr->GetNameStringByIndex((int32)Value);
	}

	//���봫���Enumֵ��Ӧ��FName
	template<typename TEnum>
	FORCEINLINE FString GetEnumValueAsName(const FString& Name, TEnum Value)
	{
		return FName(*GetEnumValueAsString<TEnum>(Name, Value));
	}

	//�������FName��Ӧ��Enum���
	template<typename TEnum>
	FORCEINLINE TEnum GetEnumValueFromName(const FString& Name, FName Value)
	{
		const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, *Name, true);
		if (!EnumPtr)
		{
			return TEnum(0);
		}
		return (TEnum)EnumPtr->GetIndexByName(Value);
	}

	//template<typename TEnum>
	FORCEINLINE int32 GetEnumIndexFromName(const FString& Name, FName Value)
	{
		const UEnum* EnumPtr = FindObject<UEnum>((UObject*)ANY_PACKAGE, *Name, true);
		if (!EnumPtr)
		{
			return -1;
		}
		return EnumPtr->GetIndexByName(Value);
	}

	//��ȡ������ý��
	FORCEINLINE FString GetCallResult(ECallResult Value)
	{
		const UEnum* EnumPtr = FindObject<UEnum>((UObject*)ANY_PACKAGE, *FString("ECallResult"), true);
		if (EnumPtr)
		{
			return EnumPtr->GetNameStringByIndex((int32)Value);
		}
		return "";
	}
}

/**
 * 
 */

class AHFDriver;
class APlayerController;

UCLASS()
class HFDATADRIVEN_API UHFCommon : public UObject
{
	GENERATED_BODY()
	
public:
	static UHFCommon* Get();

	void InitDriver(AHFDriver* InDriver);
	AHFDriver* GetDriver();

	void InitController(APlayerController* InController);
	APlayerController* GetController();

	//��ͣ��Ϸ
	void SetPauseGame(bool IsPause);

	//��ȡ��Ϸ�Ƿ���ͣ
	const bool IsPauseGame() const;

private:
	static UHFCommon* HFComInst;
	
	AHFDriver* Driver;

	APlayerController* PlayerController;
};
