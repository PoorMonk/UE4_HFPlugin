// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HFCenterModule.h"
#include "HFCommon/HFCommon.h"

#include "HFDriver.generated.h"

class IHFOOInterface;

UCLASS()
class HFDATADRIVEN_API AHFDriver : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHFDriver();
	
	virtual void Tick(float DeltaTime) override;

	virtual void PostInitializeComponents() override;

	//ע����Դ
	bool RegisterToModule(IHFOOInterface* ObjectInst);

	//ִ�з��䷽��
	void ExecuteFunction(HFModuleAgreement Agreement, HFParam* Param);
	void ExecuteFunction(HFObjectAgreement Agreement, HFParam* Param);

#if WITH_EDITOR
	//�����޸ķ���
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//ע��GamePlay��ܵ�DataDriven
	void RegisterGamePlay();

public:	
	UPROPERTY(EditAnywhere, NoClear, BlueprintReadOnly, Category = "HFDataDriven")
		USceneComponent* RootScene;
	
	UPROPERTY(EditAnywhere, NoClear, BlueprintReadOnly, Category = "HFDataDriven")
		UHFCenterModule* Center;

	//ģ���Ӧ��ö��������
	UPROPERTY(EditDefaultsOnly, Category = "HFDataDriven")
		FName ModuleType;

protected:
	//�ж��Ƿ��ǵ�һ֡
	bool IsBeginPlay;
};
