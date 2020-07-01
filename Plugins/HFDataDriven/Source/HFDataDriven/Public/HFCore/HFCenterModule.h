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
	//迭代调用本模组以及子模组的EditChangeModuleType方法
	void IterChangeModuleType(UHFModule* Module, FName ModType);
	//递归创建模块
	void IterCreateManager(UHFModule* Module);
	//递归初始化
	void IterModuleInit(UHFModule* Module);
	//递归BeginPlay
	void IterModuleBeginPlay(UHFModule* Module);
	//递归Tick
	void IterModuleTick(UHFModule* Module, float DeltaSeconds);

	//提取所有模组到数组
	void TotalGatherModule(FName ModType);
	
	void IterGatherModule(UHFModule* Module, TArray<UHFModule*>& GatherGrooup);

protected:
	//保存模组的数组，顺序与枚举相同
	TArray<UHFModule*> ModuleGroup;
};
