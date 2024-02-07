#include <stdio.h>
#include"Dog.h"
#include"Cat.h"
int main() {
	Dog* dog = new Dog;
	Cat* cat = new Cat;
	dog->Bark();
	cat->Bark();
	delete dog;
	delete cat;
	return 0;
}
