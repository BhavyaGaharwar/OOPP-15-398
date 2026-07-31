#include <iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int img;

    public:
    void input()
    {
        cout<<"Real part:";
        cin>>real;
        cout<<"Imaginary part:";
        cin>>img;
    }
    void show()
        {
            cout<<real;
            if(img>=0)
            cout<<"+"<<img<<"i"<<endl;
            else
            cout<<img<<"i"<<endl;
        }
    void add(int a,int b)
        {
            real=real+a;
            img=img+b;
        }

    void add(Complex p)
    {
        p.show();
        real=real+p.real;
        img=img+p.img;
    }

    void add(Complex p,Complex q)
    {
        real=p.real+q.real;
        img=p.img+q.img;
    }
    Complex add2(int a,int b)
    {
        Complex m;
        m.real=real+a;
        m.img=img+b;
        return m;
    }

    };
        int main()
        {
            Complex c1,c2,c3;
            c1.input();
            c2.input();
            c1.show();
            c2.show();
            c1.add(2,10); //1st add
            c1.show();
            c2.add(c1);  //2nd add
            c2.show();
            c3.add(c1,c2); //3rd add
            c3.show();
            Complex q=c1.add2(6,12);
        }
    