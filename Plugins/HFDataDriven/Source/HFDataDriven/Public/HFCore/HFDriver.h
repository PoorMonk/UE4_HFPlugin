// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HFCenterModule.h"
#include "HFCommon/HFCommon.h"

#include "HFDriver.generated.h"

UCLASS()
class HFDATADRIVEN_API AHFDriver : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHFDriver();
	
	virtual void Tick(float DeltaTime) override;

	virtual void PostInitializeComponents() override;

#if WITH_EDITOR
	//属性修改方法
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, NoClear, BlueprintReadOnly, Category = "HFDataDriven")
		USceneComponent* RootScene;
	
	UPROPERTY(EditAnywhere, NoClear, BlueprintReadOnly, Category = "HFDataDriven")
		UHFCenterModule* Center;

	//模组对应的枚举类型名
	UPROPERTY(EditDefaultsOnly, Category = "HFDataDriven")
		FName ModuleType;

protected:
	//判断是否是第一帧
	bool IsBeginPlay;
};
