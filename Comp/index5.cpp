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

     Comp operator-( )
     {
        return 
     }
};
int main()
{

}