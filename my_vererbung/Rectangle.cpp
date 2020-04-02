#include "Rectangle.h"

Rectangle::Rectangle(double height, double width){    
    this->width = width;
    this->height = height;
    this->m_name = "Rectangle";
}
Rectangle::~Rectangle(){
    std::cout << this->name() << std::endl;
}
double Rectangle::area() const {
    return height*width;    
}
double Rectangle::circumfence() const{
    return 2*(height+width);
}
std::string Rectangle::name() const{
    return m_name;
}
