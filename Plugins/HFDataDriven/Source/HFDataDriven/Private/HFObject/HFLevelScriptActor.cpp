// Fill out your copyright notice in the Description page of Project Settings.


#include "HFObject/HFLevelScriptActor.h"

AHFLevelScriptActor::AHFLevelScriptActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AHFLevelScriptActor::BeginPlay()
{
	Super::BeginPlay();

	//�Զ�ע�ᵽ���
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
