// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/ReflectHFActor.h"

void AReflectHFActor::HFEnable()
{
	Super::HFEnable();

	/*AcceptCallParam* Param = AcceptCallRT((int32)ERCGameModule::Center, EAgreementType::SelfObject, "LifeCallActor", "AcceptCall", "Happy Harkey");
	HFH::Debug() << HFH::GetCallResult(Param->CallResult) << HFH::Endl();
	delete Param;*/
}

void AReflectHFActor::AcceptCall(FString InfoStr)
{
	HFH::Debug() << GetObjectName() << " --> " << InfoStr << HFH::Endl();
}

void AReflectHFActor::WealthCall(int32 Counter, FString InfoStr, bool InFlag)
{
	HFH::Debug() << Counter << " --> " << InfoStr << " --> " << InFlag << HFH::Endl();
}
