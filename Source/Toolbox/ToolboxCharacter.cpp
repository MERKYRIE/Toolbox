// Fill out your copyright notice in the Description page of Project Settings.


#include "ToolboxCharacter.h"

// Sets default values
AToolboxCharacter::AToolboxCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AToolboxCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AToolboxCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AToolboxCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

