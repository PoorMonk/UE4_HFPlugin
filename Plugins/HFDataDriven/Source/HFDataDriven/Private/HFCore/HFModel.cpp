// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/HFCore/HFModel.h"
#include "HFObject/HFOOInterface.h"

void UHFModel::ModelTick(float DeltaSeconds)
{
	//����Tick���Tick����
	for (int i = 0; i < ObjectTickGroup.Num(); ++i)
	{
		ObjectTickGroup[i]->HFTick(DeltaSeconds);
	}

	//��ʱ�������ĳ�����ڵĶ���
	TArray<IHFOOInterface*> TempObjectGroup;
	for (int i = 0; i < ObjectActiveGroup.Num(); ++i)
	{
		if (ObjectActiveGroup[i]->ActiveLife())
		{
			TempObjectGroup.Push(ObjectActiveGroup[i]);
		}
	}
	//���������������ڵĶ����Ƴ�����������
	for (int i = 0; i < TempObjectGroup.Num(); ++i)
	{
		ObjectActiveGroup.Remove(TempObjectGroup[i]);
		if (TempObjectGroup[i]->IsAllowTickEvent)
		{
			ObjectTickGroup.Push(TempObjectGroup[i]);
		}
	}

	for (int i = 0; i < ObjectReleaseGroup.Num(); ++i)
	{
		ObjectReleaseGroup[i]->HFRelease();
	}
	ObjectReleaseGroup.Empty();

	//�������ٶ�����
	TempObjectGroup.Empty();
	for (int i = 0; i < ObjectDestroyGroup.Num(); ++i)
	{
		if (ObjectDestroyGroup[i]->DestroyLife())
		{
			ObjectReleaseGroup.Push(ObjectDestroyGroup[i]);
			TempObjectGroup.Push(ObjectDestroyGroup[i]);
			ObjectGroup.Remove(ObjectDestroyGroup[i]->GetObjectName());
			FName objClsName = ObjectDestroyGroup[i]->GetClassName();
			ObjectClassGroup.Find(objClsName)->Remove(ObjectDestroyGroup[i]);
			if (!ObjectClassGroup.Find(objClsName)->Num())
			{
				ObjectClassGroup.Remove(objClsName);
			}
		}
	}

	for (int i = 0; i < TempObjectGroup.Num(); i++)
	{
		ObjectDestroyGroup.Remove(TempObjectGroup[i]);
	}

	//����Ԥ���ٶ�����
	TempObjectGroup.Empty();
	for (int i = 0; i < PreObjectDestroyGroup.Num(); ++i)
	{
		if (PreObjectDestroyGroup[i]->RunState == EBaseObjectState::Stable)
		{
			TempObjectGroup.Push(PreObjectDestroyGroup[i]);
		}
	}
	for (int i = 0; i < TempObjectGroup.Num(); ++i)
	{
		PreObjectDestroyGroup.Remove(TempObjectGroup[i]);
		ObjectDestroyGroup.Push(TempObjectGroup[i]);
		ObjectTickGroup.Remove(TempObjectGroup[i]);
	}	
}

void UHFModel::RegisterObject(IHFOOInterface* ObjectInst)
{
	if (!ObjectGroup.Contains(ObjectInst->GetObjectName()))
	{
		ObjectGroup.Add(ObjectInst->GetObjectName(), ObjectInst);
		FName ObjClassName = ObjectInst->GetClassName();
		if (ObjectClassGroup.Contains(ObjClassName))
		{
			ObjectClassGroup.Find(ObjClassName)->Push(ObjectInst);
		}
		else
		{
			TArray<IHFOOInterface*> ObjectArray;
			ObjectArray.Push(ObjectInst);
			ObjectClassGroup.Add(ObjClassName, ObjectArray);
		}
		//��Ӷ��󵽼�������������
		ObjectActiveGroup.Push(ObjectInst);
	}
	else
	{
		HFH::Debug() << "Object Repeated --> " << ObjectInst->GetObjectName() << HFH::Endl();
	}
}

void UHFModel::DestroyObject(FName ObjectName)
{
	//��ȡ��Ҫ���ٵĶ���
	if (ObjectGroup.Contains(ObjectName))
	{
		IHFOOInterface* TargetObject = *ObjectGroup.Find(ObjectName);
		if (!ObjectDestroyGroup.Contains(TargetObject) && !PreObjectDestroyGroup.Contains(TargetObject))
		{
			switch (TargetObject->RunState)
			{
			case EBaseObjectState::Active:
				PreObjectDestroyGroup.Push(TargetObject);
				break;
			case EBaseObjectState::Stable:
				ObjectDestroyGroup.Push(TargetObject);
				ObjectTickGroup.Remove(TargetObject);
				break;
			default:
				break;
			}
		}
	}
}

void UHFModel::DestroyObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{

}

void UHFModel::EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{

}

void UHFModel::DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{

}

void UHFModel::GetSelfObject(TArray<FName> TargetNameGroup, TArray<IHFOOInterface*>& TargetObjectGroup)
{
	for (int i = 0; i < TargetNameGroup.Num(); ++i)
	{
		if (ObjectGroup.Contains(TargetNameGroup[i]))
		{
			TargetObjectGroup.Push(*ObjectGroup.Find(TargetNameGroup[i]));
		}
	}
}

void UHFModel::GetOtherObject(TArray<FName> TargetNameGroup, TArray<IHFOOInterface*>& TargetObjectGroup)
{
	for (TMap<FName, IHFOOInterface*>::TIterator It(ObjectGroup); It; ++It)
	{
		bool IsSame = false;
		for (int i = 0; i < TargetNameGroup.Num(); ++i)
		{
			if (TargetNameGroup[i].IsEqual(It->Key))
			{
				IsSame = true;
				break;
			}
		}
		if (!IsSame)
		{
			TargetObjectGroup.Push(It->Value);
		}
	}
}
