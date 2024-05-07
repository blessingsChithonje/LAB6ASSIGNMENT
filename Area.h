#include "Triangle.h"
#include "Square.h"
#include "Circle.h"

namespace shapes
{

    class Area
    {

    public:
        static float CalculateArea(Square &square);
        static float CalculateArea(Triangle &triangle);
        static float CalculateArea(Circle &circle);
    };
}