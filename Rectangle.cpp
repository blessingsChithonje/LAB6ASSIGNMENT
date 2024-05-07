#include "Rectangle.h"

Rectangle::Rectangle() : lengthOfRectangle(0.00), widthOfRectangle(0.00)
{
}
Rectangle::~Rectangle()
{
    // Destructor
}
void Rectangle::setLength(float Length)
{
    lengthOfRectangle = Length;
}
void Rectangle::setWidth(float Width)
{
    widthOfRectangle = Width;
}

float Rectangle::GetLength()
{
    return lengthOfRectangle;
}
float Rectangle::GetWidth()
{
    return widthOfRectangle;
}

float Rectangle::CalculateArea() const
{
    return lengthOfRectangle * widthOfRectangle;
}