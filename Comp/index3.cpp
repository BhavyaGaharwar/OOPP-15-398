#include <iostream>
using namespace std;

class Comp
{
    int real, img;

public:
    Comp(int r = 0, int i = 0) : real{r}, img{i} {}

    void show()
    {
        cout << real << " + " << img << "i" << endl;
    }

    friend Comp operator+(Comp c1, Comp c2);
};

Comp operator+(Comp c1, Comp c2)
{
    return Comp(c1.real + c2.real, c1.img + c2.img);
}

int main()
{
    Comp c1(5, 20);
    Comp c2(10, 30);

    c1.show();
    c2.show();

    Comp c3 = c1 + c2;

    c3.show();
}