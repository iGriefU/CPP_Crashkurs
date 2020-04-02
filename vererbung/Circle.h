#pragma once
#include "shape.h"

class Circle : public Shape
{
public:
	Circle(double radius);

	std::string name() const override;
	double circumfence() const override;
	double area() const override;

private:
	double m_radius;
};