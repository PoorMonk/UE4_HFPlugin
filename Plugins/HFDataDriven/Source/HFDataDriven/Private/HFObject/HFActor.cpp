// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/HFObject/HFActor.h"

// Sets default values
AHFActor::AHFActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHFActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHFActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

