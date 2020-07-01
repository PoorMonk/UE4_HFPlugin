// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/HFCore/HFCenterModule.h"

void UHFCenterModule::IterChangeModuleType(UHFModule* Module, FName ModType)
{
	Module->ChangeModuleType(ModType);
	for (int i = 0; i < Module->GetAttachChildren().Num(); ++i)
	{
		UHFModule* ChildModule = Cast<UHFModule>(Module->GetAttachChildren()[i]);
		if (ChildModule)
		{
			Module->ChildrenModules.Push(ChildModule);
			IterChangeModuleType(ChildModule, ModType);
		}
	}
}

void UHFCenterModule::IterCreateManager(UHFModule* Module)
{
	Module->CreateManager();
	for (int i = 0; i < Module->ChildrenModules.Num(); ++i)
	{
		IterCreateManager(Module->ChildrenModules[i]);
	}
}

void UHFCenterModule::IterModuleInit(UHFModule* Module)
{
	Module->ModuleInit();
	for (int i = 0; i < Module->ChildrenModules.Num(); ++i)
	{
		IterModuleInit(Module->ChildrenModules[i]);
	}
}

void UHFCenterModule::IterModuleBeginPlay(UHFModule* Module)
{
	Module->ModuleBeginPlay();
	for (int i = 0; i < Module->ChildrenModules.Num(); ++i)
	{
		IterModuleBeginPlay(Module->ChildrenModules[i]);
	}
}

void UHFCenterModule::IterModuleTick(UHFModule* Module, float DeltaSeconds)
{
	Module->ModuleTick(DeltaSeconds);
	for (int i = 0; i < Module->ChildrenModules.Num(); ++i)
	{
		IterModuleTick(Module->ChildrenModules[i], DeltaSeconds);
	}
}

void UHFCenterModule::TotalGatherModule(FName ModType)
{
	if (ModType.IsNone())
	{
		return;
	}

	//�Ȼ�ȡ���е�ģ��
	TArray<UHFModule*> GatherModules;
	IterGatherModule(this, GatherModules);

	//��ȡö�ٵ�Ԫ������
	int32 ModuleNum = FindObject<UEnum>((UObject*)ANY_PACKAGE, *(ModType.ToString()), true)->GetMaxEnumValue();
	//���ն���ModuleGroup
	for (int i = 0; i < ModuleNum; ++i)
	{
		ModuleGroup.Push(nullptr);
	}
	//��ģ��ID���ģ�鵽ModuleGroup
	for (int i = 0; i < GatherModules.Num(); i++)
	{
		ModuleGroup[GatherModules[i]->ModuleIndex] = GatherModules[i];
		HFH::Debug() << i << HFH::Endl();
	}
}

void UHFCenterModule::IterGatherModule(UHFModule * Module, TArray<UHFModule*>& GatherGroup)
{
	GatherGroup.Push(Module);
	for (int i = 0; i < Module->ChildrenModules.Num(); ++i)
	{
		IterGatherModule(Module->ChildrenModules[i], GatherGroup);
	}
}
