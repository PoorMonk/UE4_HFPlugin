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
	//ע�ᵽ���
	void RegisterToModule(FName ModName, FName ObjName = FName(), FName ClsName = FName());
	//��ȡ������
	FName GetObjectName() const;
	//��ȡ����
	FName GetClassName() const;
	//��ȡģ��Index
	int32 GetModuleIndex() const;
	//��ȡObject����
	UObject* GetObjectBody() const;
	//��ܻ�ȡ���纯��
	UWorld* GetHFWorld() const;
	//���ⲿָ��ģ��
	void AssignModule(UHFModule* Mod);

	//������������
	bool ActiveLife();

	//�����������ں���
	bool DestroyLife();

	//�������ڣ���ģ�����������
	virtual void HFInit();		//��ʼ��
	virtual void HFLoading();	//���ذ󶨵���Դ
	virtual void HFRegister();	//ע�����ݻ��¼�
	virtual void HFEnable();	//�������

	virtual void HFTick(float DeltaSeconds);	//֡����

	virtual void HFDisable();	//ʧ�����
	virtual void HFUnRegister();//ע�����ݻ��¼�
	virtual void HFUnLoading();	//���ٰ���Դ
	virtual void HFRelease();	//�ͷ�

	//�������
	virtual void OnEnable();
	//ʧ�����
	virtual void OnDisable();
	//�����Լ�
	void HFDestroy();

public:
	//�Ƿ�����֡�������У�Ĭ��Ϊfalse
	bool IsAllowTickEvent;

	//��������
	EBaseObjectLife LifeState;

	//����״̬
	EBaseObjectState RunState;

protected:
	//���������UObject
	UObject* IBody;

	//����ģ��
	UHFModule* IModule;

	//����������
	AHFDriver* IDriver;

	//��������
	FName IObjectName;

	//����������
	FName IClassName;

	//��Ӧģ������
	int32 ModuleIndex;
};
