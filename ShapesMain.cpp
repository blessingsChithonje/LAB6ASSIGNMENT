#include "Triangle.h"
#include "Circle.h"
#include "Square.h"
#include "Area.h"
#include <iostream>

using namespace std;
using namespace shapes;

int main()
{

    string userChoice;

    while (true)
    {
        cout << " Select  your option" << endl;
        cout << " 1. Calculate area of Square" << endl;
        cout << " 2. Calculate area of Triangle" << endl;
        cout << " 3. Calculate area of Circle" << endl;
        cout << " 4. Quit " << endl;

        cout << " Enter your option :  " << endl;
        cin >> userChoice;
    }

    if (userChoice == "1")
    {
        float side;
        cout << " Enter the size of side" << endl;
        cin >> side;
        Square::square(side);

        cout << " Area of Square is : " << Area::CalculateArea(square) << endl;
    }
    else if (userChoice == "2")
    {
        float base, height;
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        Triangle triangle(base, height);
        cout << "Area of the triangle: " << Area::CalculateArea(triangle) << endl;
    }
    else if (userChoice == "3")
    {
        float radius;
        cout << " Enter the radius of the circle: " << endl;
        cin >> radius;
        Circle circle(radius);

        cout << " Area of the circle is : " << Area::CalculateArea(circle) << endl;
    }
    else if (userChoice == "4")
    {
        cout << " Program quits.." << endl;
    }
    else
    {
        cout << " Invalid input Please try again" << endl;
    }
    return 0;
}