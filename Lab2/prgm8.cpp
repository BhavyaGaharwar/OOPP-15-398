#include <iostream>
using namespace std;

void callByValue(int x)
{
    x = x + 10;
}

void callByReference(int &x)
{
    x = x + 10;
}

void callByAddress(int *x)
{
    *x = *x + 10;
}

int main()
{
    int a = 26;
    int b = 3;
    int c = 21;

    callByValue(a);
    callByReference(b);
    callByAddress(&c);

    cout << "After Call by Value: " << a << endl;
    cout << "After Call by Reference: " << b << endl;
    cout << "After Call by Address: " << c << endl;

    return 0;
}