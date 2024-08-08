// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGloblColorPicker.h"

FColor UMyGloblColorPicker::GetMousePixel()
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