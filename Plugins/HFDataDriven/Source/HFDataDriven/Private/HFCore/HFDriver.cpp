// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/HFCore/HFDriver.h"

// Sets default values
AHFDriver::AHFDriver()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	RootComponent = RootScene;

	Center = CreateDefaultSubobject<UHFCenterModule>(TEXT("Center"));
	Center->SetupAttachment(RootComponent);

	IsBeginPlay = false;
}

void AHFDriver::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	//注册Driver到UHFCommon单例
	UHFCommon::Get()->InitDriver(this);
	//在游戏运行之前进行一次模组ID的设定，在这里面会注册子模组到数组
	Center->IterChangeModuleType(Center, ModuleType);

	Center->IterCreateManager(Center);
}

// Called when the game starts or when spawned
void AHFDriver::BeginPlay()
{
	Super::BeginPlay();
	
	Center->IterModuleInit(Center);
}

// Called every frame
void AHFDriver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsBeginPlay)
	{
		Center->IterModuleBeginPlay(Center);
		IsBeginPlay = true;
	}
	else
	{
		Center->IterModuleTick(Center, DeltaTime);
	}
}


