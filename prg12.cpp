
#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }

    void operator-()
    {
        real = -real;
        img = -img;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main()
{
    Complex c1(5, 3), c2(2, 4), c3;

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    -c1;
    cout << "After unary operator (-): ";
    c1.display();

    c3 = c1 + c2;
    cout << "After binary operator (+): ";
    c3.display();

    return 0;
}
