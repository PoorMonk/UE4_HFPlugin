// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/LifeCallActor.h"

void ALifeCallActor::HFInit()
{
	Super::HFInit();

	IsAllowTickEvent = true;
	TimeCounter = 0;

	//HFH::Debug() << "HFInit" << HFH::Endl();
}

void ALifeCallActor::HFLoading()
{
	Super::HFLoading();
	//HFH::Debug() << "HFLoading" << HFH::Endl();
}

void ALifeCallActor::HFRegister()
{
	Super::HFRegister();
	//HFH::Debug() << "HFRegister" << HFH::Endl();
}

void ALifeCallActor::HFEnable()
{
	Super::HFEnable();
	//HFH::Debug() << "HFEnable" << HFH::Endl();

	//TestReflectParam* trp = TestReflect(ModuleIndex, "TestReflect", 12, "Harkey", true);
	/*TestReflectParam* trp = TestReflectRT((int32)ERCGameModule::HUD, "TestReflect", 12, "Harkey", true);
	if (trp)
	{
		HFH::Debug() << "Return Value: " << trp->BackResult() << HFH::Endl();
		delete trp;
	}*/
	//TestNoParam((int32)ERCGameModule::HUD, "TestNoParam");
}

void ALifeCallActor::HFTick(float DeltaSeconds)
{
	Super::HFTick(DeltaSeconds);

	TimeCounter++;
	if (TimeCounter < 3)
	{
		//HFH::Debug() << "HFTick --> " << TimeCounter << HFH::Endl();
		
	}
	else
	{
		HFDestroy();
		//HFH::Debug() << "HFDestroy" << HFH::Endl();
	}
}

void ALifeCallActor::HFDisable()
{
	Super::HFDisable();
	//HFH::Debug() << "HFDisable" << HFH::Endl();
}

void ALifeCallActor::HFUnRegister()
{
	Super::HFUnRegister();
	//HFH::Debug() << "HFUnRegister" << HFH::Endl();
}

void ALifeCallActor::HFUnLoading()
{
	Super::HFUnLoading();
	//HFH::Debug() << "HFUnLoading" << HFH::Endl();
}

void ALifeCallActor::HFRelease()
{
	Super::HFRelease();
	//HFH::Debug() << "HFRelease" << HFH::Endl();
}

void ALifeCallActor::AcceptCall(FString InfoStr)
{
	HFH::Debug() << GetObjectName() << " --> " << InfoStr << HFH::Endl();
}
