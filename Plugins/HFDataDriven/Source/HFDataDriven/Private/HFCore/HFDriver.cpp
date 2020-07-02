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

	//ע��Driver��UHFCommon����
	UHFCommon::Get()->InitDriver(this);
	//����Ϸ����֮ǰ����һ��ģ��ID���趨�����������ע����ģ�鵽����
	Center->IterChangeModuleType(Center, ModuleType);
	//ָ����ģ��ID���ռ�ģ�鵽������
	Center->TotalGatherModule(ModuleType);
	//��������ģ���ģ��
	Center->IterCreateManager(Center);
}

bool AHFDriver::RegisterToModule(IHFOOInterface* ObjectInst)
{
	return Center->RegisterToModule(ObjectInst);
}

#if WITH_EDITOR
void AHFDriver::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName()
		== GET_MEMBER_NAME_CHECKED(AHFDriver, ModuleType))
	{
		Center->IterChangeModuleType(Center, ModuleType);
	}
}
#endif

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


