// Fill out your copyright notice in the Description page of Project Settings.


#include "HFObject/HFHUD.h"

AHFHUD::AHFHUD()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AHFHUD::BeginPlay()
{
	Super::BeginPlay();

	//�Զ�ע�ᵽ���
	RegisterToModule(ModuleName, ObjectName, ClassName);
}
