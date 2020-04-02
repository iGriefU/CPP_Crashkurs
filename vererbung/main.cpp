#include "rectangle.h"
#include "circle.h"
#include <iostream>

void print(Shape const& shape)
{
	std::cout << "shape: " << shape.name() << std::endl;
	std::cout << "circumfence: " << shape.circumfence() << std::endl;
	std::cout << "area: " << shape.area() << std::endl;
}

int main()
{
	print(Rectangle(20, 15));
	print(Circle(10));
}