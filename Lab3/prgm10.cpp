#include <iostream>
using namespace std;

class Value
{
    int a, b;

public:
    void input();
    void show();
};

inline void Value::input()
{
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;
}

inline void Value::show()
{
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;
}

int main()
{
    Value v;

    v.input();
    v.show();

    return 0;
}