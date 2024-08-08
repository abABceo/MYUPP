// Fill out your copyright notice in the Description page of Project Settings.


#include "Myblueprint_colorPicker.h"

// Sets default values
AMyblueprint_colorPicker::AMyblueprint_colorPicker()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyblueprint_colorPicker::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyblueprint_colorPicker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int AMyblueprint_colorPicker::TestFunction(int a, int b) {
	int c = a + b;
	return c;
}

FColor AMyblueprint_colorPicker::GetMousePixel_s()
{
	Windows::HDC hdc = ::GetDC(NULL);
	POINT p1;
	GetCursorPos(&p1);
	COLORREF Color = ::GetPixel(hdc, p1.x, p1.y);
	int R = GetRValue(Color);
	int G = GetGValue(Color);
	int B = GetBValue(Color);
	::ReleaseDC(NULL, hdc);

	FColor realColor = FColor(R, G, B);

	return realColor;
}

