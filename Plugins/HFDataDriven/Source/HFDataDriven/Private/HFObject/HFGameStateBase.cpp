// Fill out your copyright notice in the Description page of Project Settings.


#include "HFObject/HFGameStateBase.h"

AHFGameStateBase::AHFGameStateBase()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AHFGameStateBase::BeginPlay()
{
	Super::BeginPlay();

	//�Զ�ע�ᵽ���
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
