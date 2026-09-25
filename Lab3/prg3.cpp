#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b = 2)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}

float subtract(float a, float b)
{
    return a - b;
}

int main()
{
    int x = 20, y = 10;
    float p = 15.5, q = 5.5;

    cout << "Addition = " << add(x, y) << endl;

    cout << "Multiplication (default argument) = " << multiply(x) << endl;
    cout << "Multiplication = " << multiply(x, y) << endl;

    cout << "Integer Subtraction = " << subtract(x, y) << endl;
    cout << "Float Subtraction = " << subtract(p, q) << endl;

    return 0;
}
