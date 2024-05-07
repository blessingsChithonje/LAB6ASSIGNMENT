#include "Square.h"
namespace shapes
{
    Square::Square() : SideLength(0.00)
    {
    }
    Square::Square(float side) : SideLength(side)
    {
    }
    Square::~Square()
    {
    }

    void Square::setSideLength(float side)
    {
        SideLength = side;
    }
    float Square::getSideLength()
    {
        return SideLength;
    }

}
