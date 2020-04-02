#include <iostream>
#include "Shape.h"

int main()
{
    Shape *form = new Shape();
    form->draw();
    return 0;
}

//class A:public B,public C,public D //erbe methods und fields