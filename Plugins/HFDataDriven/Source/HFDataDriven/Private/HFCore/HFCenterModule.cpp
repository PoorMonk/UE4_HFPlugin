// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/HFCore/HFCenterModule.h"

void UHFCenterModule::IterChangeModuleType(UHFModule* Module, FName ModType)
{
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
