// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HFMessage.h"
#include "HFModule.generated.h"

class UHFModel;
class UHFWealth;
class IHFOOInterface;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HFDATADRIVEN_API UHFModule : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHFModule();

	void CreateManager();

	virtual void ModuleInit();

	virtual void ModuleBeginPlay();

	virtual void ModuleTick(float DeltaSeconds);

	void ChangeModuleType(FName ModuleType);

	//注册对象到数据模块
	void RegisterObject(IHFOOInterface* ObjectInst);

	//模组对象销毁自身
	void ChildDestroy(FName ObjectName);

public:
	TArray<UHFModule*> ChildrenModules;

	UPROPERTY(VisibleAnywhere, Category = "HFDataDriven")
		int32 ModuleIndex;

protected:
	//数据模块指针
	UHFModel* Model;
	//消息模块指针
	UHFMessage* Message;
	//资源模块指针
	UHFWealth* Wealth;
};
