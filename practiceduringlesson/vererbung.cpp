#include <iostream>
#include "Shape.h"

class Triangle : public Shape
{
public:
    unsigned int corners() const override
    {
        return 3;
    }
};

void draw(Shape &s)
{
    std::cout << s.corners() << " Ecken" << std::endl;
}

int main()
{
    Triangle form;
    draw(form);
    return 0;
}

//class A:public B,public C,public D //erbe methods und fields