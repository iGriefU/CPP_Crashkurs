#include "Shape.h"

class Circle : public Shape{
    public:
        Circle(double radius);

        double area() const override;
        double circumfence() const override;
        std::string name() const override;

    private:
        double radius;
        std::string m_name;

};