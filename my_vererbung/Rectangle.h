#include "Shape.h"

class Rectangle : public Shape{
    
    public:
        Rectangle(double height, double width);
        ~Rectangle();
        double area() const override;
        double circumfence() const override;
        std::string name() const override;

    private:
        double height,width;
        std::string m_name;
    
};