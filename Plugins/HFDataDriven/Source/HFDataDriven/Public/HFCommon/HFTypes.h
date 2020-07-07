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

//框架自定义Debug输出类
#pragma region LogDebug
class HFDATADRIVEN_API HFRecord
{
public:
	inline HFRecord() { }
	~HFRecord() { }

	static TSharedPtr<HFRecord> Get();

	//设置参数
	inline void InitParam(float time, FColor color)
	{
		ShowTime = time;
		ShowColor = color;
	}

	//执行打印方法
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

	//重写操作符
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

	//输出样例(最后以自身为参数来执行真正的输出函数)
	//HFRecord::Get() << FString("haha") << FName("Harkey") << int << float << HFRecord::Get();

public:
	//打印模式，0：debug，1：log，2：Warning，3：Error
	uint8 PatternID;

private:
	//单例对象
	static TSharedPtr<HFRecord> RecordInst;

	//生成的字符串
	FString RecordInfo;
	//显示时间
	float ShowTime;
	//显示颜色
	FColor ShowColor;
};
#pragma endregion

#pragma region LifeTimePart
//生命周期
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

//对象状态
UENUM()
enum class EBaseObjectState : uint8
{
	Active = 0,		//激活状态
	Stable,			//稳定状态
	Destroy			//销毁状态
};
#pragma endregion

#pragma region ReflectPart
//对象调用协议
UENUM()
enum class EAgreementType : uint8
{
	SelfObject,			//跟传入的对象通信
	OtherObject,		//跟传入的对象之外的对象通信
	ClassOtherObject,	//跟传入的对象的相同类的其它对象通信
	SelfClass,			//跟这个类的对象通信
	OtherClass,			//跟其它类通信
	All					//跟所有的对象通信
};

//调用结果
UENUM()
enum class ECallResult : uint8
{
	NoModule = 0,	//缺失模组
	LackObject,		//缺失部分对象
	NoFunction,		//缺失方法
	Succeed			//调用成功
};

//通信参数结构体基类
struct HFParam
{
public:
	//调用结果
	ECallResult CallResult;

	//参数指针
	void* ParamPtr;
};

//通信协议，Module方法
struct  HFModuleAgreement
{
public:
	//模组ID
	int32 ModuleIndex;

	//方法名
	FName FunctionName;
};

//通信协议， HFOOInterface方法
struct HFObjectAgreement
{
public:
	//模组ID
	int32 ModuleIndex;

	//协议类型
	EAgreementType AgreementType;

	//对象组名
	TArray<FName> ObjectGroup;

	//方法名
	FName FunctionName;
};

#pragma endregion

#pragma region HFAnyFunc
//存储任意类型的函数
struct HFAnyFunc 
{
	struct BaseFunc
	{
	public:
		virtual ~BaseFunc() { }
	};
	template<typename RetType, typename... VarTypes>
	struct ValFunc : public BaseFunc
	{
	public:
		TFunction<RetType(VarTypes...)> TarFunc;
		ValFunc(const TFunction<RetType(VarTypes...)> InsFunc) : TarFunc(InsFunc) { }
		RetType Execute(VarTypes... Params)
		{
			return TarFunc(Params...);
		}
	};
	BaseFunc* FuncPtr;
public:
	HFAnyFunc() : FuncPtr(nullptr) { }
	template<typename RetType, typename... VarTypes>
	HFAnyFunc(const TFunction<RetType(VarTypes...)> InsFunc) : FuncPtr(new ValFunc<RetType, VarTypes...>(InsFunc)) { }
	~HFAnyFunc() { if (FuncPtr) delete FuncPtr; }
	template<typename RetType, typename... VarTypes>
	RetType Execute(VarTypes... Params)
	{
		ValFunc<RetType, VarTypes...>* SubFuncPtr = static_cast<ValFunc<RetType, VarTypes...>*>(FuncPtr);
		return SubFuncPtr->Execute(Params...);
	}
	template<typename RetType, typename... VarTypes>
	TFunction<RetType(VarTypes...)>& GetFunc()
	{
		ValFunc<RetType, VarTypes...>* SubFuncPtr = static_cast<ValFunc<RetType, VarTypes...>*>(FuncPtr);
		return SubFuncPtr->TarFunc;
	}
};

#pragma endregion

#pragma region AnyElement
//存储任意类型的数据结构
struct AnyElement
{
	//元素父结构体
	struct BaseElement
	{
	public:
		virtual ~BaseElement() { }
	};
	//实际存储值得结构体
	template<typename T>
	struct ValueElement : public BaseElement
	{
	public:
		T Value;
		ValueElement(const T& InValue) : Value(InValue) { }
	};
	//父结构体指针，用于存储实例化得子结构体的地址
	BaseElement* ElementPtr;

public:
	AnyElement() : ElementPtr(nullptr) { }
	//构造函数传入值并且实例化子结构体存储于父结构体指针
	template<typename T>
	AnyElement(const T& InValue) : ElementPtr(new ValueElement<T>(InValue)) { }
	~AnyElement() { if (ElementPtr) delete ElementPtr; }
	//获取保存的变量
	template<typename T>
	T& Get()
	{
		ValueElement<T>* SubPtr = static_cast<ValueElement<T>*>(ElementPtr);
		return SubPtr->Value;
	}
};
#pragma endregion
