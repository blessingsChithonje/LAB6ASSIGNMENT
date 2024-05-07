#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    float lengthOfRectangle, widthOfRectangle;

    cout << " Enter the length of rectangle" << endl;
    cin >> lengthOfRectangle;

    cout << " Enter the width of rectangle " << endl;
    cin >> widthOfRectangle;

    Rectangle rectangle;

    rectangle.setLength(lengthOfRectangle);
    rectangle.setWidth(widthOfRectangle);

    cout << " Area of rectangle is : " << rectangle.CalculateArea() << endl;
}