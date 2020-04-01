#pragma once
#include <iostream>

class Rect{
    public:
        Rect(int w=0, int h=0);
        ~Rect(){
            std::cout << "Abueno adios master!";
        };
        int area(){
            return m_width * m_height;
        }
        void draw();
        
    private:
        int m_height,m_width;
};