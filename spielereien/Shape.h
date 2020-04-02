#pragma once
#include <iostream>
#include <string>
class Shape
{

public:
    Shape()
    {
        assignEckig();
        this->name = "Abstrakte Form";
        ecken = 0;
    }

    Shape(std::string name)
    {
        assignEckig();
        this->name = name;
        ecken = 0;
    }
    unsigned int corners()
    {
        return ecken;
    }
    void draw()
    {
        std::cout << name << " hat " << ecken << " Ecken." << std::endl;
    }

private:
    unsigned int ecken;
    bool eckig;
    std::string name;
    void assignEckig()
    {
        if (ecken)
        {
            eckig = false;
        }
        else
        {
            eckig = true;
        }
        this->name = name;
    }
};