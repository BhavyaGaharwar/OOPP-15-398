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

    friend Comp operator+(Comp c, int x);
};

Comp operator+(Comp c, int x)
{
    return Comp(c.real + x, c.img);
}

int main()
{
    Comp c1(5, 20);

    c1.show();

    Comp c2 = c1 + 10;

    c2.show();
}