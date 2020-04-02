#include "Circle.h"
#define _USE_MATH_DEFINES
#include <math.h>

Circle::Circle(double radius){
    this->radius = radius;
    this->m_name = "Circle";
}
Circle::~Circle(){
    std::cout << this->name() << std::endl;
}

double Circle::area() const{
    return M_PI * radius * radius;
}

double Circle::circumfence() const{
    return 2 * M_PI * radius;
}

std::string Circle::name() const{
    return m_name;
}