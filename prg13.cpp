
#include <iostream>
using namespace std;
class Number
{
    int x;
    public:
    // Basic type to class type
    Number(int a)
    {
        x = a;
    }
    // Class type to basic type
    operator int()
    {
        return x;
    }

    void display()
    {
        cout << "Value of x: " << x << endl;
    }
};

int main()
{
    int a = 10;
    // Basic type to class type
    Number n = a;
    n.display();
    // Class type to basic type
    int b = n;
    cout << "Converted integer: " << b;
    return 0;
}
