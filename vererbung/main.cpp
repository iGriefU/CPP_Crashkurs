#include "Shape.h"

int main(){

    //Shape s; nicht möglich da abstrakte Klasse
    Rectangle r = new Rectangle(20,20); //Rectangle will nicht hier inkludiert werden, trotz headerfile import

    return 0;
}