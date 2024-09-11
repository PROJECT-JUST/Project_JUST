// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseHandActor.h"

// Sets default values
ABaseHandActor::ABaseHandActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseHandActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseHandActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

