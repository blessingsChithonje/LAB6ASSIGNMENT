#include <iostream>
class Rectangle
{

private:
    float lengthOfRectangle;
    float widthOfRectangle;

public:
    // default constructor
    Rectangle();

    // destructor that do nothing for now
    ~Rectangle();

    void setLength(float Length);
    void setWidth(float Width);

    float GetLength();
    float GetWidth();

    // member function to calculate area
    float CalculateArea() const;
};