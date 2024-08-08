// Fill out your copyright notice in the Description page of Project Settings.


#include "Blueprint_colorpicker.h"

// Sets default values
ABlueprint_colorpicker::ABlueprint_colorpicker()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABlueprint_colorpicker::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlueprint_colorpicker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABlueprint_colorpicker::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

