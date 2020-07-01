// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/HFCore/HFMMInterface.h"

// Add default functionality here for any IHFMMInterface functions that are not pure virtual.

void IHFMMInterface::AssignModule(UHFModule* Mod)
{
	IModule = Mod;

	IDriver = UHFCommon::Get()->GetDriver();
}
