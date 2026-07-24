#include <iostream>
using namespace std;

void swapByVal(int x,int y)
{
    int z=x;
    x=y;
    y=z;
}

void swapByAddress(int *x, int *y)
{
    int z=*x;
    *x=*y;
    *y=z;
}

void swapByReference(int &x,int &y)
{
    int z=x;
    x=y;
    y=z;
}

int main()
{
    int x,y;
    cout<<"Enter value of x,y:";
    cin>>x>>y;

    cout<<"Swapping by value:"<<endl;
    cout<<"Value befor swap:"<<endl;
    cout<<"x:"<<x<<",y:"<<y<<endl;

    swapByVal(x,y);

    cout<<"Value after swap:"<<endl;
    cout<<"x:"<<x<<",y:"<<y<<endl;

    cout<<"Swapping by address:"<<endl;
    cout<<"Value before swap:"<<endl;
    cout<<"x:"<<x<<",y:"<<y<<endl;

    swapByAddress(&x,&y);

    cout<<"Value after swap:"<<endl;
    cout<<"x:"<<x<<",y:"<<y<<endl;

    cout<<"Swapping by reference:"<<endl;
    cout<<"Value before swap:"<<endl;
    cout<<"x:"<<x<<",y:"<<y<<endl;

    swapByReference(x,y);

    cout<<"Value after swap:"<<endl;
    cout<<"x:"<<x<<",y:"<<y<<endl;

    return 0;

}
