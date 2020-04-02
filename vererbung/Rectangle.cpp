#include "Shape.h"

class Rectangle : public Shape
{

public:
    Rectangle(double height, double length)
    {
        this->height = height;
        this->length = length;
    }

    double area() const override
    {
        return length * height;
    }

    double circumfence() const override
    {
        return 2 * (length + height);
    }

    std::string name() const override
    {
        return m_name;
    }

private:
    double length, height;
    std::string m_name;
};
