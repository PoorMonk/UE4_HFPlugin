// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/HFCommon/HFCommon.h"

UHFCommon* UHFCommon::HFComInst = nullptr;

UHFCommon* UHFCommon::Get()
{
	if (!HFComInst)
	{
		HFComInst = NewObject<UHFCommon>();
		HFComInst->AddToRoot();
	}

	return HFComInst;
}

void UHFCommon::InitDriver(AHFDriver* InDriver)
{
	Driver = InDriver;
}

AHFDriver* UHFCommon::GetDriver()
{
	return Driver;
}

