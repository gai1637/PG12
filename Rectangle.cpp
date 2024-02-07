#include "Rectangle.h"
#include<stdio.h>
Rectangle::Rectangle(float a, float b) {
	width = a;
	height = b;
	area = 0;
}
void Rectangle::Size() {
	area = width * height;
}
void Rectangle::Draw() {
	printf("–ÊÏ‚Í%f\n", area);
}