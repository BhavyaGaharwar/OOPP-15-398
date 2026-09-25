#include <iostream>
using namespace std;

inline int square(int n)
{
    return n * n;
}

int add(int a, int b = 10)  //default argument
{
    return a + b;
}

int multiply(int a, int b)   //function overloading
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}

int main()
{
    cout << "Square = " << square(5) << endl;

    cout << "Addition = " << add(5) << endl;
    cout << "Addition = " << add(5, 20) << endl;

    cout << "Integer multiplication = " << multiply(5, 4) << endl;

    cout << "Decimal multiplication = " << multiply(2.5, 4.0) << endl;

    return 0;
}