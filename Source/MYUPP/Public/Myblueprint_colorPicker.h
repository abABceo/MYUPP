// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/PreWindowsApi.h"
#include <windows.h>
#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformTypes.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Myblueprint_colorPicker.generated.h"

UCLASS()
class MYUPP_API AMyblueprint_colorPicker : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyblueprint_colorPicker();

	UFUNCTION(BlueprintCallable, Category = "MyActorFunctionFromC")
		int TestFunction(int a, int b);
		FColor GetMousePixel_s();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
