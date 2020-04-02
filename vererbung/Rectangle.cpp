#include "rectangle.h"

Rectangle::Rectangle(double width, double height)
{
	m_width = width;
	m_height = height;
}

std::string Rectangle::name() const
{ return "rectangle"; }
double Rectangle::circumfence() const
{ return 2 * (m_width + m_height); }
double Rectangle::area() const
{ return m_width * m_height; }