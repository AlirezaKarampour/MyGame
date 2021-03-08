// Fill out your copyright notice in the Description page of Project Settings.


#include "TestSourceControlActor.h"

// Sets default values
ATestSourceControlActor::ATestSourceControlActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestSourceControlActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestSourceControlActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

