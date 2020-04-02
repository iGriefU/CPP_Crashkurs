#pragma once
#include <string>

class Shape
{
public:
    Shape()
    {
    }
    virtual ~Shape()
    {
    }

    virtual std::string name() const = 0;
    virtual double circumfence() const = 0;
    virtual double area() const = 0;
};