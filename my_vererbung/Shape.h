#pragma once
#include <string>
#include <iostream>

class Shape{
    
    public:
        Shape(){};
        virtual ~Shape(){};
        virtual double area() const = 0;
        virtual double circumfence() const = 0;
        virtual std::string name() const =0;
};