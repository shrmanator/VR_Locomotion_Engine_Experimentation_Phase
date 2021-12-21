// Fill out your copyright notice in the Description page of Project Settings.


#include "./ArchVizAssets.h"

// Sets default values
AArchVizAssets::AArchVizAssets()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArchVizAssets::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArchVizAssets::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AArchVizAssets::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

