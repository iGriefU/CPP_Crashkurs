#include "Rectangle.h"
#include "Circle.h"

void print(Shape const& shape){
    std::cout << "Name: " << shape.name() << " , Umfang: " << shape.circumfence() << " , Fl\x84 \bche: " << shape.area() << std::endl;
}

int main(){

    Shape* array[5];
    array[0] = new Circle(23);
    array[1] = new Rectangle(23,234);
    array[2] = new Circle(6785);
    array[3] = new Rectangle(34,2468);
    array[4] = new Circle(235);
    
    for(int i=0;i<5;i++){
        delete array[i];
    }
    
}