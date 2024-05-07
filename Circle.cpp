#include "Circle.h"
namespace shapes
{

    Circle::Circle() : Radius(0.00)
    {
    }
    Circle::Circle(float radius) : Radius(radius)
    {
    }
    Circle::~Circle()
    {
    }

    void Circle::setRadius(float radius)
    {
        Radius = radius;
    }

    float Circle::getRadius()
    {
        return Radius;
    }

}