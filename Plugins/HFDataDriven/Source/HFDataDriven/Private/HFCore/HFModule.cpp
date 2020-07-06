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
	//ʵ�������
	Model = NewObject<UHFModel>();
	Message = NewObject<UHFMessage>();
	Wealth = NewObject<UHFWealth>();
	//��������
	Model->AddToRoot();
	Message->AddToRoot();
	Wealth->AddToRoot();
	//ָ��ģ��
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

void UHFModule::DestroyObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	Model->DestroyObject(Agreement, TargetNameGroup);
}

void UHFModule::EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	Model->EnableObject(Agreement, TargetNameGroup);
}

void UHFModule::DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	Model->DisableObject(Agreement, TargetNameGroup);
}

//void UHFModule::TestReflect(int32 Counter, FString InfoStr, bool& BackResult)
//{
//	HFH::Debug() << Counter << " ; " << InfoStr << " ; " << GetFName() << HFH::Endl();
//
//	BackResult = false;
//}
//
//void UHFModule::TestNoParam()
//{
//	HFH::Debug() << "No Param" << HFH::Endl();
//}

void UHFModule::ExecuteFunction(HFModuleAgreement Agreement, HFParam* Param)
{
	UFunction* ExeFunc = FindFunction(Agreement.FunctionName);
	if (ExeFunc)
	{
		Param->CallResult = ECallResult::Succeed;
		ProcessEvent(ExeFunc, Param->ParamPtr);
	}
	else
	{
		Param->CallResult = ECallResult::NoFunction;
	}
}

void UHFModule::ExecuteFunction(HFObjectAgreement Agreement, HFParam* Param)
{
	switch (Agreement.AgreementType)
	{
	case EAgreementType::SelfObject:
		ExecuteSelfObject(Agreement, Param);
		break;
	case EAgreementType::OtherObject:
		ExecuteOtherObject(Agreement, Param);
		break;
	case EAgreementType::ClassOtherObject:
		ExecuteClassOtherObject(Agreement, Param);
		break;
	case EAgreementType::SelfClass:
		ExecuteSelfClass(Agreement, Param);
		break;
	case EAgreementType::OtherClass:
		ExecuteOtherClass(Agreement, Param);
		break;
	case EAgreementType::All:
		ExecuteAll(Agreement, Param);
		break;	
	default:
		break;
	}
}

void UHFModule::ExecuteSelfObject(HFObjectAgreement Agreement, HFParam* Param)
{
	//����洢Ŀ��������
	TArray<IHFOOInterface*> TargetObjectGroup;
	Model->GetSelfObject(Agreement.ObjectGroup, TargetObjectGroup);
	
	ExecuteFunc(TargetObjectGroup, Agreement, Param);

	//�����ȡ�Ķ�����ȱʧ�����ý��Ϊ����ȱʧ�������������ȼ����
	if (TargetObjectGroup.Num() != Agreement.ObjectGroup.Num())
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

void UHFModule::ExecuteOtherObject(HFObjectAgreement Agreement, HFParam* Param)
{
	TArray<IHFOOInterface*> TargetObjectGroup;
	int32 TotalObjectNum = Model->GetOtherObject(Agreement.ObjectGroup, TargetObjectGroup);
	
	ExecuteFunc(TargetObjectGroup, Agreement, Param);

	if (Agreement.ObjectGroup.Num() + TargetObjectGroup.Num() != TotalObjectNum)
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

void UHFModule::ExecuteClassOtherObject(HFObjectAgreement Agreement, HFParam* Param)
{
	TArray<IHFOOInterface*> TargetObjectGroup;

	int32 TotalClassNum = Model->GetClassOtherObject(Agreement.ObjectGroup, TargetObjectGroup);
	
	ExecuteFunc(TargetObjectGroup, Agreement, Param);

	if (Agreement.ObjectGroup.Num() + TargetObjectGroup.Num() != TotalClassNum)
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

void UHFModule::ExecuteSelfClass(HFObjectAgreement Agreement, HFParam* Param)
{
	TArray<IHFOOInterface*> TargetObjectGroup;
	Model->GetSelfClass(Agreement.ObjectGroup, TargetObjectGroup);
	ExecuteFunc(TargetObjectGroup, Agreement, Param);
	if (!TargetObjectGroup.Num())
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

void UHFModule::ExecuteOtherClass(HFObjectAgreement Agreement, HFParam* Param)
{
	TArray<IHFOOInterface*> TargetObjectGroup;
	Model->GetOtherClass(Agreement.ObjectGroup, TargetObjectGroup);
	ExecuteFunc(TargetObjectGroup, Agreement, Param);
	if (!TargetObjectGroup.Num())
	{
		Param->CallResult = ECallResult::LackObject;
	}
}

void UHFModule::ExecuteAll(HFObjectAgreement Agreement, HFParam* Param)
{
	TArray<IHFOOInterface*> TargetObjectGroup;
	Model->GetAll(TargetObjectGroup);
	ExecuteFunc(TargetObjectGroup, Agreement, Param);
}

void UHFModule::ExecuteFunc(const TArray<IHFOOInterface*>& TargetObjGroup, HFObjectAgreement Agreement, HFParam* Param)
{
	for (int i = 0; i < TargetObjGroup.Num(); ++i)
	{
		UFunction* ExeFunc = TargetObjGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			Param->CallResult = ECallResult::Succeed;
			TargetObjGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			Param->CallResult = ECallResult::NoFunction;
		}
	}
}

