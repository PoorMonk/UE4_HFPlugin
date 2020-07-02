// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HFCore/HFModule.h"
#include "HFCenterModule.generated.h"

/**
 * 
 */
UCLASS()
class HFDATADRIVEN_API UHFCenterModule : public UHFModule
{
	GENERATED_BODY()
	
public:
	//�������ñ�ģ���Լ���ģ���EditChangeModuleType����
	void IterChangeModuleType(UHFModule* Module, FName ModType);
	//�ݹ鴴��ģ��
	void IterCreateManager(UHFModule* Module);
	//�ݹ��ʼ��
	void IterModuleInit(UHFModule* Module);
	//�ݹ�BeginPlay
	void IterModuleBeginPlay(UHFModule* Module);
	//�ݹ�Tick
	void IterModuleTick(UHFModule* Module, float DeltaSeconds);

	//��ȡ����ģ�鵽����
	void TotalGatherModule(FName ModType);
	
	void IterGatherModule(UHFModule* Module, TArray<UHFModule*>& GatherGrooup);

protected:
	//����ģ������飬˳����ö����ͬ
	TArray<UHFModule*> ModuleGroup;
};
