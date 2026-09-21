// #include <iostream>
// using namespace std;
// class Comp
// {
//     int real,img;
//     public:
//     Comp(int r=0,int i=0): real{r}, img{i} {}

//     void show()
//     {
//         cout<<real<<','<<img<<endl;
//     }
// };
// int main()
// {
//     Comp c1(5,20);
//     Comp c2;
//     c1.show();
//     c2.show();
//     // Comp c3=c1+c2;   //error
//     // c3.show();
// }


#include <iostream>
using namespace std;
class Comp
{
    int real, img;

public:
    Comp(int r = 0, int i = 0) : real{r}, img{i} {}

    void show()
    {
        cout << this->real << " + " << this->img << "i" << endl;
    }

    Comp operator+(Comp c)
    {
        return Comp(this->real + c.real, this->img + c.img);
    }
};

int main()
{
    Comp c1(5, 20);
    Comp c2;

    c1.show();
    c2.show();

    Comp c3 = c1 + c2;

    c3.show();
}

