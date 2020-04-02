#include "Rectangle.h"
#include "Circle.h"
#include <iostream>

void print(Shape const& shape){
    std::cout << "Name: " << shape.name() << " , Umfang: " << shape.circumfence() << " , Fl\x84 \bche: " << shape.name() << std::endl;
}

int main(){
    Circle dwight = Circle(25.2342);
    Rectangle jim = Rectangle(35.23,235.23);

    print(dwight);
    print(jim);
}