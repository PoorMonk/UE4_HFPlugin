// Fill out your copyright notice in the Description page of Project Settings.


#include "HFObject/HFPlayerCameraManager.h"

AHFPlayerCameraManager::AHFPlayerCameraManager()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AHFPlayerCameraManager::BeginPlay()
{
	Super::BeginPlay();

	//�Զ�ע�ᵽ���
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
