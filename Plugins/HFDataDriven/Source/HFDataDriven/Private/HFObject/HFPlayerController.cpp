// Fill out your copyright notice in the Description page of Project Settings.


#include "HFObject/HFPlayerController.h"

AHFPlayerController::AHFPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AHFPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//�Զ�ע�ᵽ���
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
