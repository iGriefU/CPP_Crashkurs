#include "Shape.h"

class Rectangle : public Shape{

    public:
        Rectangle(double height, double length){
            this->height = height;
            this->length = length;
        }

        double area() const override{
            return length*height;
        }

        double circumfence() const override{
            return 2*(length + height);
        }

        std::string name() const override{
            return m_name; // 
        }
        /*
        .\Rectangle.cpp:26:21: error: 'std::__cxx11::string Rectangle::name' conflicts with a previous declaration
         std::string name;
                     ^
        .\Rectangle.cpp:20:21: note: previous declaration 'std::__cxx11::string Rectangle::name() const'
         std::string name() const override{
                     ^
        .\Rectangle.cpp: In member function 'virtual std::__cxx11::string Rectangle::name() const':
        .\Rectangle.cpp:21:26: error: cannot convert 'Rectangle::name' from type 'std::__cxx11::string (Rectangle::)() const {aka std::__cxx11::basic_string<char> (Rectangle::)() const}' to type 'std::__cxx11::string {aka std::__cxx11::basic_string<char>}'
             return this->name;
                          ^
        */
    private:
        double length,height;
        std::string m_name;

};
