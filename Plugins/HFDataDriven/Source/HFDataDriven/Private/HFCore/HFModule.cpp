// Fill out your copyright notice in the Description page of Project Settings.


#include "HFCore/HFModule.h"
#include "HFCore/HFModel.h"
#include "HFCore/HFWealth.h"
#include "HFCommon/HFCommon.h"
#include "HFObject/HFOOInterface.h"

// Sets default values for this component's properties
UHFModule::UHFModule()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


void UHFModule::CreateManager()
{
	//实例化组件
	Model = NewObject<UHFModel>();
	Message = NewObject<UHFMessage>();
	Wealth = NewObject<UHFWealth>();
	//避免销毁
	Model->AddToRoot();
	Message->AddToRoot();
	Wealth->AddToRoot();
	//指定模组
	Model->AssignModule(this);
	Message->AssignModule(this);
	Wealth->AssignModule(this);
}

void UHFModule::ModuleInit()
{
	Model->ModelInit();
	Message->MessageInit();
	Wealth->WealthInit();
}

void UHFModule::ModuleBeginPlay()
{
	Model->ModelBeginPlay();
	Message->MessageBeginPlay();
	Wealth->WealthBeginPlay();
}

void UHFModule::ModuleTick(float DeltaSeconds)
{
	Model->ModelTick(DeltaSeconds);
	Wealth->WealthTick(DeltaSeconds);
	Message->MessageTick(DeltaSeconds);
}

void UHFModule::ChangeModuleType(FName ModuleType)
{
	ModuleIndex = HFH::GetEnumIndexFromName(ModuleType.ToString(), GetFName());
	if (ModuleIndex < 0)
	{
		HFH::Debug() << "Generate Module Index Error --> " << GetName() << HFH::Endl();
	}
}

void UHFModule::RegisterObject(IHFOOInterface* ObjectInst)
{
	Model->RegisterObject(ObjectInst);
	ObjectInst->AssignModule(this);
}

void UHFModule::ChildDestroy(FName ObjectName)
{
	Model->DestroyObject(ObjectName);
}

