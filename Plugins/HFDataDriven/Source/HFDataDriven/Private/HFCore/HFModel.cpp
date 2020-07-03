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
	TArray<IHFOOInterface*> TargetObjectGroup;

	GetAgreementObject(Agreement, TargetNameGroup, TargetObjectGroup);

	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		if (!ObjectDestroyGroup.Contains(TargetObjectGroup[i]) && !PreObjectDestroyGroup.Contains(TargetObjectGroup[i]))
		{
			switch (TargetObjectGroup[i]->RunState)
			{
			case EBaseObjectState::Active:
				PreObjectDestroyGroup.Push(TargetObjectGroup[i]);
				break;
			case EBaseObjectState::Stable:
				ObjectDestroyGroup.Push(TargetObjectGroup[i]);
				ObjectTickGroup.Remove(TargetObjectGroup[i]);
				break;
			default:
				break;
			}
		}
	}
}

void UHFModel::EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	TArray<IHFOOInterface*> TargetObjectGroup;

	GetAgreementObject(Agreement, TargetNameGroup, TargetObjectGroup);

	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		if (TargetObjectGroup[i]->RunState == EBaseObjectState::Stable && TargetObjectGroup[i]->LifeState == EBaseObjectLife::Disable)
		{
			TargetObjectGroup[i]->OnEnable();
		}
	}
}

void UHFModel::DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	TArray<IHFOOInterface*> TargetObjectGroup;

	GetAgreementObject(Agreement, TargetNameGroup, TargetObjectGroup);

	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		if (TargetObjectGroup[i]->RunState == EBaseObjectState::Stable && TargetObjectGroup[i]->LifeState == EBaseObjectLife::Enable)
		{
			TargetObjectGroup[i]->OnDisable();
		}
	}
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

void UHFModel::GetClassOtherObject(TArray<FName> TargetNameGroup, TArray<IHFOOInterface*>& TargetObjectGroup)
{
	if (!ObjectGroup.Contains(TargetNameGroup[0]))
	{
		return;
	}
	FName ObjectClassName = (*ObjectGroup.Find(TargetNameGroup[0]))->GetClassName();
	for (TArray<IHFOOInterface*>::TIterator It(*ObjectClassGroup.Find(ObjectClassName)); It; ++It)
	{
		bool IsSame = false;
		for (int i = 0; i < TargetNameGroup.Num(); ++i)
		{
			if ((*It)->GetObjectName().IsEqual(TargetNameGroup[i]))
			{
				IsSame = true;
				break;
			}
		}
		if (!IsSame)
		{
			TargetObjectGroup.Push(*It);
		}
	}
}

void UHFModel::GetSelfClass(TArray<FName> TargetNameGroup, TArray<IHFOOInterface*>& TargetObjectGroup)
{
	for (int i = 0; i < TargetNameGroup.Num(); ++i)
	{
		if (!ObjectClassGroup.Contains(TargetNameGroup[i]))
		{
			continue;
		}
		TargetObjectGroup.Append(*ObjectClassGroup.Find(TargetNameGroup[i]));
	}
}

void UHFModel::GetOtherClass(TArray<FName> TargetNameGroup, TArray<IHFOOInterface*>& TargetObjectGroup)
{
	for (TMap<FName, TArray<IHFOOInterface*>>::TIterator It(ObjectClassGroup); It; ++It)
	{
		if (!TargetNameGroup.Contains(It->Key))
		{
			TargetObjectGroup.Append(It->Value);
		}
	}
}

void UHFModel::GetAll(TArray<IHFOOInterface*>& TargetObjectGroup)
{
	ObjectGroup.GenerateValueArray(TargetObjectGroup);
}

void UHFModel::GetAgreementObject(EAgreementType Agreement, TArray<FName> TargetNameGroup, TArray<IHFOOInterface*>& TargetObjectGroup)
{
	switch (Agreement)
	{
	case EAgreementType::SelfObject:
		GetSelfObject(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::OtherObject:
		GetOtherObject(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::ClassOtherObject:
		GetClassOtherObject(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::SelfClass:
		GetSelfClass(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::OtherClass:
		GetOtherClass(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::All:
		GetAll(TargetObjectGroup);
		break;
	default:
		break;
	}
}
