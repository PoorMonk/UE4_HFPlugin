// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HFMessage.h"
#include "HFModule.generated.h"

class UHFModel;
class UHFWealth;
class IHFOOInterface;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HFDATADRIVEN_API UHFModule : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHFModule();

	void CreateManager();

	virtual void ModuleInit();

	virtual void ModuleBeginPlay();

	virtual void ModuleTick(float DeltaSeconds);

	void ChangeModuleType(FName ModuleType);

	//注册对象到数据模块
	void RegisterObject(IHFOOInterface* ObjectInst);

	//模组对象销毁自身
	void ChildDestroy(FName ObjectName);

	//临时测试方法
	/*UFUNCTION()
		void TestReflect(int32 Counter, FString InfoStr, bool& BackResult);

	UFUNCTION()
		void TestNoParam();*/

	//反射事件批量销毁对象
	UFUNCTION()
		void DestroyObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);

	//反射事件批量激活对象
	UFUNCTION()
		void EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);

	//反射事件批量失活对象
	UFUNCTION()
		void DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);

	//调用模组方法
	void ExecuteFunction(HFModuleAgreement Agreement, HFParam* Param);

	//调用对象方法
	void ExecuteFunction(HFObjectAgreement Agreement, HFParam* Param);

public:
	TArray<UHFModule*> ChildrenModules;

	UPROPERTY(VisibleAnywhere, Category = "HFDataDriven")
		int32 ModuleIndex;

protected:

	//执行单个对象方法
	void ExecuteSelfObject(HFObjectAgreement Agreement, HFParam* Param);
	//执行其它对象的方法
	void ExecuteOtherObject(HFObjectAgreement Agreement, HFParam* Param);
	//执行相同类的区域对象方法
	void ExecuteClassOtherObject(HFObjectAgreement Agreement, HFParam* Param);
	//执行类对象的方法
	void ExecuteSelfClass(HFObjectAgreement Agreement, HFParam* Param);
	//执行其它类对象的方法
	void ExecuteOtherClass(HFObjectAgreement Agreement, HFParam* Param);
	//执行所有对象的方法
	void ExecuteAll(HFObjectAgreement Agreement, HFParam* Param);


protected:
	//数据模块指针
	UHFModel* Model;
	//消息模块指针
	UHFMessage* Message;
	//资源模块指针
	UHFWealth* Wealth;

private:
	void ExecuteFunc(const TArray<IHFOOInterface*>& TargetObjGroup, HFObjectAgreement Agreement, HFParam* Param);
};
