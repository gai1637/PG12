#pragma once
#include"IShape.h"
class Rectangle:public IShape
{
public:
	void Size()override;
	void Draw()override;
	Rectangle(float a, float b);
private:
	float width;
	float height;
	float area;
};

