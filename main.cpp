#include <stdio.h>
#include"Circle.h"
#include"Rectangle.h"
int main() {
	Circle* circle = new Circle(4);
	Rectangle* rectangle = new Rectangle(2, 6);
	circle->Size();
	circle->Draw();
	rectangle->Size();
	rectangle->Draw();
	delete circle;
	delete rectangle;

	return 0;
}
