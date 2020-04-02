#include "Shape.h"
#define _USE_MATH_DEFINES
#include <math.h>

class Circle : public Shape{

    public:
        Circle(double radius){
            m_name = "Circle";
        }
        ~Circle(){
            delete &radius,m_name;
        }

        double area() const override{
            return M_PI*radius*radius;
        }

        double circumfence() const override{
            return M_PI*radius;
        }
        
        std::string name() const override{
            return m_name;
        }

    private:
        double radius;
        std::string m_name;
};