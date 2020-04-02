#include "Shape.h"

class Rectangle : public Shape{
    
    public:
        Rectangle(double height, double width){}
        ~Rectangle();
        virtual double area() const override;
        virtual double circumfence() const override;
        virtual std::string name() const override;

    private:
        double height,width;
        std::string m_name;
    
}