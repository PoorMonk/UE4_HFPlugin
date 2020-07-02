// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/GameEngine.h"

#include "HFTypes.generated.h"

/**
 * 
 */
UCLASS()
class HFDATADRIVEN_API UHFTypes : public UObject
{
	GENERATED_BODY()
	
};

//����Զ���Debug�����
#pragma region LogDebug
class HFDATADRIVEN_API HFRecord
{
public:
	inline HFRecord() { }
	~HFRecord() { }

	static TSharedPtr<HFRecord> Get();

	//���ò���
	inline void InitParam(float time, FColor color)
	{
		ShowTime = time;
		ShowColor = color;
	}

	//ִ�д�ӡ����
	inline void Output()
	{
		switch (PatternID)
		{
		case 0:
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, ShowTime, ShowColor, RecordInfo);
			}
			break;
		case 1:
			UE_LOG(LogTemp, Log, TEXT("%s"), *RecordInfo);
			break;
		case 2:
			UE_LOG(LogTemp, Warning, TEXT("%s"), *RecordInfo);
			break;
		case 3:
			UE_LOG(LogTemp, Error, TEXT("%s"), *RecordInfo);
			break;
		default:
			break;
		}
		RecordInfo.Empty();
	}

	//��д������
	inline HFRecord& operator<<(FString Info){ RecordInfo.Append(Info); return *this; }
	inline HFRecord& operator<<(FName Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline HFRecord& operator<<(FText Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline HFRecord& operator<<(const char* Info) { RecordInfo += Info; return *this; }
	inline HFRecord& operator<<(const char Info) { RecordInfo.AppendChar(Info); return *this; }
	inline HFRecord& operator<<(int32 Info) { RecordInfo.Append(FString::FromInt(Info)); return *this; }
	inline HFRecord& operator<<(float Info) { RecordInfo.Append(FString::SanitizeFloat(Info)); return *this; }
	inline HFRecord& operator<<(double Info) { RecordInfo.Append(FString::SanitizeFloat(Info)); return *this; }
	inline HFRecord& operator<<(bool Info) { RecordInfo.Append(Info ? FString("true") : FString("false")); return *this; }
	inline HFRecord& operator<<(FVector2D Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline HFRecord& operator<<(FVector Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline HFRecord& operator<<(FRotator Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline HFRecord& operator<<(FQuat Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline HFRecord& operator<<(FTransform Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline HFRecord& operator<<(FMatrix Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline HFRecord& operator<<(FColor Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline HFRecord& operator<<(FLinearColor Info) { RecordInfo.Append(Info.ToString()); return *this; }
	inline void operator<<(HFRecord& Record)
	{
		Record.Output();
	}

	//�������(���������Ϊ������ִ���������������)
	//HFRecord::Get() << FString("haha") << FName("Harkey") << int << float << HFRecord::Get();

public:
	//��ӡģʽ��0��debug��1��log��2��Warning��3��Error
	uint8 PatternID;

private:
	//��������
	static TSharedPtr<HFRecord> RecordInst;

	//���ɵ��ַ���
	FString RecordInfo;
	//��ʾʱ��
	float ShowTime;
	//��ʾ��ɫ
	FColor ShowColor;
};
#pragma endregion

#pragma region LifeTimePart
//��������
UENUM()
enum class EBaseObjectLife : uint8
{
	None = 0,
	Init,
	Loading,
	Register,
	Enable,
	Disable,
	UnRegister,
	UnLoading
};

//����״̬
UENUM()
enum class EBaseObjectState : uint8
{
	Active = 0,		//����״̬
	Stable,			//�ȶ�״̬
	Destroy			//����״̬
};
#pragma endregion

#pragma region ReflectPart
//�������Э��
UENUM()
enum class EAgreementType : uint8
{
	SelfObject,			//������Ķ���ͨ��
	OtherObject,		//������Ķ���֮��Ķ���ͨ��
	ClassOtherObject,	//������Ķ������ͬ�����������ͨ��
	SelfClass,			//�������Ķ���ͨ��
	OtherClass,			//��������ͨ��
	All					//�����еĶ���ͨ��
};
#pragma endregion

