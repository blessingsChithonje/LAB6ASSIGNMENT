#include <iostream>
#include "Rectangle.h"
using namespace std;
int main() {
    float length, width;

    // Create an instance of Rectangle using default constructor
    Rectangle rect1;

    // Input length and width from user
    cout << "Enter length of rectangle 1: ";
    cin >> length;
    rect1.setLength(length);

    cout << "Enter width of rectangle 1: ";
    cin >> width;
    rect1.setWidth(width);

    // Calculate and output area of rectangle 1
    cout << "Area of rectangle 1: " << rect1.calculateArea() << endl;

    // Create another instance of Rectangle using overloaded constructor
    cout << "Enter length of rectangle 2: ";
    cin >> length;

    cout << "Enter width of rectangle 2: ";
    cin >> width;

    Rectangle rect2(length, width);

    // Calculate and output area of rectangle 2
    cout << "Area of rectangle 2: " << rect2.calculateArea() << endl;

    return 0;
}
