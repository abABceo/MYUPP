// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Blueprint_colorpicker.generated.h"

UCLASS()
class MYUPP_API ABlueprint_colorpicker : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABlueprint_colorpicker();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
