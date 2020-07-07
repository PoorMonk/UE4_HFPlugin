// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/ReflectHFActor.h"

void AReflectHFActor::HFEnable()
{
	Super::HFEnable();

	/*AcceptCallParam* Param = AcceptCallRT((int32)ERCGameModule::Center, EAgreementType::SelfObject, "LifeCallActor", "AcceptCall", "Happy Harkey");
	HFH::Debug() << HFH::GetCallResult(Param->CallResult) << HFH::Endl();
	delete Param;*/

	ElementList.Push(new AnyElement(233));
	ElementList.Push(new AnyElement(FString("haha")));
	ElementList.Push(new AnyElement(true));
	ElementList.Push(new AnyElement(FVector(1.f, 3.f, 6.f)));

	HFH::Debug() << ElementList[0]->Get<int32>() << HFH::Endl();
	HFH::Debug() << ElementList[1]->Get<FString>() << HFH::Endl();
	HFH::Debug() << ElementList[2]->Get<bool>() << HFH::Endl();
	HFH::Debug() << ElementList[3]->Get<FVector>() << HFH::Endl();

	RegFuncList<void, FString>([this](FString InfoStr) { AcceptCall(InfoStr); });
	RegFuncList<int32, int32, FString, bool>([this](int32 Counter, FString InfoStr, bool InFlag) { return WealthCall(Counter, InfoStr, InFlag); });//带返回值的要写return

	FuncList[0]->Execute<void, FString>(FString("hi, Harkey!"));
	HFH::Debug() << FuncList[1]->Execute<int32, int32, FString, bool>(233, FString("Funlist1"), false) << HFH::Endl();
}

void AReflectHFActor::AcceptCall(FString InfoStr)
{
	HFH::Debug() << GetObjectName() << " --> " << InfoStr << HFH::Endl();
}

int32 AReflectHFActor::WealthCall(int32 Counter, FString InfoStr, bool InFlag)
{
	HFH::Debug() << Counter << " --> " << InfoStr << " --> " << InFlag << HFH::Endl();
	return 123;
}
