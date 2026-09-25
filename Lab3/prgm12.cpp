#include <iostream>
using namespace std;

double area(double radius)
{
    return 3.14 * radius * radius;
}

double area(double length, double width)
{
    return length * width;
}

int area(int side)
{
    return side * side;
}

double area(double base, double height, bool triangle)
{
    return 0.5 * base * height;
}

int main()
{
    double radius, length, width, base, height;
    int side;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Area of Circle = " << area(radius) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> length >> width;

    cout << "Area of Rectangle = " << area(length, width) << endl;

    cout << "\nEnter side of square: ";
    cin >> side;

    cout << "Area of Square = " << area(side) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> base >> height;

    cout << "Area of Triangle = " << area(base, height, true) << endl;

    return 0;
}