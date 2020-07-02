// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HFCore/HFModule.h"
#include "HFCore/HFDriver.h"
#include "HFOOInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHFOOInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class HFDATADRIVEN_API IHFOOInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//注册到框架
	void RegisterToModule(FName ModName, FName ObjName = FName(), FName ClsName = FName());
	//获取对象名
	FName GetObjectName() const;
	//获取类名
	FName GetClassName() const;
	//获取模组Index
	int32 GetModuleIndex() const;
	//获取Object主体
	UObject* GetObjectBody() const;
	//框架获取世界函数
	UWorld* GetHFWorld() const;
	//从外部指定模组
	void AssignModule(UHFModule* Mod);

	//激活生命周期
	bool ActiveLife();

	//销毁生命周期函数
	bool DestroyLife();

	//生命周期，由模组管理器调用
	virtual void HFInit();		//初始化
	virtual void HFLoading();	//加载绑定的资源
	virtual void HFRegister();	//注册数据或事件
	virtual void HFEnable();	//激活对象

	virtual void HFTick(float DeltaSeconds);	//帧函数

	virtual void HFDisable();	//失活对象
	virtual void HFUnRegister();//注销数据或事件
	virtual void HFUnLoading();	//销毁绑定资源
	virtual void HFRelease();	//释放

	//激活对象
	virtual void OnEnable();
	//失活对象
	virtual void OnDisable();
	//销毁自己
	void HFDestroy();

public:
	//是否允许帧函数运行，默认为false
	bool IsAllowTickEvent;

	//生命周期
	EBaseObjectLife LifeState;

	//生命状态
	EBaseObjectState RunState;

protected:
	//保存自身的UObject
	UObject* IBody;

	//保存模组
	UHFModule* IModule;

	//保存驱动器
	AHFDriver* IDriver;

	//对象名字
	FName IObjectName;

	//对象类名字
	FName IClassName;

	//对应模组的序号
	int32 ModuleIndex;
};
