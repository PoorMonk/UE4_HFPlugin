// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HFMMInterface.h"
#include "HFModel.generated.h"

class IHFOOInterface;

/**
 * 
 */
UCLASS()
class HFDATADRIVEN_API UHFModel : public UObject, public IHFMMInterface
{
	GENERATED_BODY()
	
public:

	virtual void ModelInit() {}
	virtual void ModelBeginPlay() {}
	virtual void ModelTick(float DeltaSeconds);

	//ע���������ģ��
	void RegisterObject(IHFOOInterface* ObjectInst);

	//���ٶ���
	void DestroyObject(FName ObjectName);

	//�������ٶ���
	void DestroyObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);
	//�����������
	void EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);
	//����ʧ�����
	void DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);
	//���ݴ���Ķ�������ȡ����
	void GetSelfObject(TArray<FName> TargetNameGroup, TArray<IHFOOInterface*>& TargetObjectGroup);
	//���ݴ���Ķ�������ȡ�����������������
	void GetOtherObject(TArray<FName> TargetNameGroup, TArray<IHFOOInterface*>& TargetObjectGroup);
	//�������ֻ�ȡ���������������
	void GetClassOtherObject(TArray<FName> TargetNameGroup, TArray<IHFOOInterface*>& TargetObjectGroup);
	//�������ֻ�ȡ��
	void GetSelfClass(TArray<FName> TargetNameGroup, TArray<IHFOOInterface*>& TargetObjectGroup);
	//�������ֻ�ȡ������
	void GetOtherClass(TArray<FName> TargetNameGroup, TArray<IHFOOInterface*>& TargetObjectGroup);
	//��ȡ���ж���
	void GetAll(TArray<IHFOOInterface*>& TargetObjectGroup);

	//����Э���ȡ���󼯺�
	void GetAgreementObject(EAgreementType Agreement, TArray<FName> TargetNameGroup, TArray<IHFOOInterface*>& TargetObjectGroup);

protected:
	//��ܶ������飬key:ObjectName
	TMap<FName, IHFOOInterface*> ObjectGroup;

	//��ܶ����༯�ϣ�key:ClassName
	TMap<FName, TArray<IHFOOInterface*>> ObjectClassGroup;

	//�ȴ��������ڵĶ���
	TArray<IHFOOInterface*> ObjectActiveGroup;
	//��Ҫ����Tick�����Ķ��󼯺�
	TArray<IHFOOInterface*> ObjectTickGroup;
	//�����������ڵĶ���
	TArray<IHFOOInterface*> ObjectDestroyGroup;
	//�ͷ����ں������󼯺�
	TArray<IHFOOInterface*> ObjectReleaseGroup;
	//Ԥ���ٶ��󣨻����ڼ���״̬����Ҫ������������٣�
	TArray<IHFOOInterface*> PreObjectDestroyGroup;
};
