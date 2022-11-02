#include "Figure.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "ukr");
	Figure* figure;
	Rectangle a(5, 10);
	figure = &a;
	std::cout << "Площа прямокутника: " << figure->Area() << std::endl;
	Circle b(3);
	figure = &b;
	std::cout << "Площа кола: " << figure->Area() << std::endl;
	RightTriangle c(3, 4);
	figure = &c;
	std::cout << "Площа прямокутного трикутника: " << figure->Area() << std::endl;
	Trapeze d(4, 6, 2);
	figure = &d;
	std::cout << "Площа трапеції: " << figure->Area() << std::endl;
	return 0;
}