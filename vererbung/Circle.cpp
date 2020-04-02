#include "circle.h"

Circle::Circle(double radius)
{ m_radius = radius; }

std::string Circle::name() const
{ return "circle"; }
double Circle::circumfence() const
{ return 2 * 3.14159265358979323846 * m_radius; } 
double Circle::area() const
{ return 3.14159265358979323846 * m_radius * m_radius; }