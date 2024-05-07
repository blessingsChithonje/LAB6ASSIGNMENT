#include "Area.h"
#include <cmath>

namespace shapes
{
    float Area::CalculateArea(Square &square)
    {
        return square.getSideLength() * square.getSideLength();
    }

    float Area::CalculateArea(Triangle &triangle)
    {
        return 0.5 * triangle.getBase() * triangle.getHieght();
    }

    float Area::CalculateArea(Circle &circle)
    {
        return M_PI * circle.getRadius() * circle.getRadius();
    }
}
