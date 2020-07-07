// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HFObject/HFActor.h"
#include "ReflectHFActor.generated.h"



/**
 * 
 */
UCLASS()
class RACECAR_API AReflectHFActor : public AHFActor
{
	GENERATED_BODY()
	
public:
	virtual void HFEnable() override;

	UFUNCTION()
		void AcceptCall(FString InfoStr);

	UFUNCTION()
		int32 WealthCall(int32 Counter, FString InfoStr, bool InFlag);

	template<typename RetType, typename... VarTypes>
	void RegFuncList(TFunction<RetType(VarTypes...)> InsFunc);

protected:

	HFOBJFUNC_ONE(AcceptCall, FString, InfoStr);

	/*struct AcceptCallParam : public HFParam
	{
		struct
		{
			FString InfoStr;
		} Parameter;
		FString InfoStr() { return Parameter.InfoStr; }
		AcceptCallParam() { ParamPtr = &Parameter; }
	};

	AcceptCallParam* AcceptCallRT(int32 ModuIndex, EAgreementType AgreementType, TArray<FName> ObjectGroup, FName FunctionName, FString InfoStr)
	{
		HFObjectAgreement Agreement;
		Agreement.ModuleIndex = ModuIndex;
		Agreement.AgreementType = AgreementType;
		Agreement.ObjectGroup = ObjectGroup;
		Agreement.FunctionName = FunctionName;
		AcceptCallParam* Param = new AcceptCallParam();
		Param->Parameter.InfoStr = InfoStr;
		ExecuteFunction(Agreement, Param);
		return Param;
	}
	AcceptCallParam* AcceptCallRT(int32 ModuIndex, EAgreementType AgreementType, FName ObjName, FName FunctionName, FString InfoStr)
	{
		HFObjectAgreement Agreement;
		Agreement.ModuleIndex = ModuIndex;
		Agreement.AgreementType = AgreementType;
		Agreement.ObjectGroup.Push(ObjName);
		Agreement.FunctionName = FunctionName;
		AcceptCallParam* Param = new AcceptCallParam();
		Param->Parameter.InfoStr = InfoStr;
		ExecuteFunction(Agreement, Param);
		return Param;
	}
	AcceptCallParam* AcceptCallRT(int32 ModuIndex, FName ObjName, FName FunctionName, FString InfoStr)
	{
		HFObjectAgreement Agreement;
		Agreement.ModuleIndex = ModuIndex;
		Agreement.AgreementType = EAgreementType::SelfObject;
		Agreement.ObjectGroup.Push(ObjName);
		Agreement.FunctionName = FunctionName;
		AcceptCallParam* Param = new AcceptCallParam();
		Param->Parameter.InfoStr = InfoStr;
		ExecuteFunction(Agreement, Param);
		return Param;
	}*/

protected:
	TArray<AnyElement*> ElementList;
	TArray<HFAnyFunc*> FuncList;
};

template<typename RetType, typename... VarTypes>
void AReflectHFActor::RegFuncList(TFunction<RetType(VarTypes...)> InsFunc)
{
	FuncList.Push(new HFAnyFunc(InsFunc));
}
