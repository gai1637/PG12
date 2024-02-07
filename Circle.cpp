#include "Circle.h"
#include<stdio.h>
Circle::Circle(float i) {
	a = i;
}
void Circle::Size() {
	a *= 3.14;
}
void Circle::Draw() {
	printf("ñ êœÇÕ%f\n", a);
}