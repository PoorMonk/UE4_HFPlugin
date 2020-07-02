// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HFGTypes.generated.h"

#pragma region GamePart

UENUM()
enum class ERCGameModule : uint8
{
	Center = 0,			//����ģ��
	HUD,				//UIģ�飬Լ�����ڵڶ�λ
	Player,				//���ģ��
};

#pragma endregion

/**
 * 
 */
UCLASS()
class HFDATADRIVEN_API UHFGTypes : public UObject
{
	GENERATED_BODY()
	
};
