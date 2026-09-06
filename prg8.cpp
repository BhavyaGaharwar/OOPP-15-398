// #include <iostream>
// using namespace std;

// class Complex {
//     int real;
//     int imag;

// public:
//     void input() {
//         cout << "Enter real part: ";
//         cin >> real;

//         cout << "Enter imaginary part: ";
//         cin >> imag;
//     }

//     void display() {
//         cout << real << " + " << imag << "i" << endl;
//     }

//     Complex add(Complex c) {
//         Complex temp;

//         temp.real = real + c.real;
//         temp.imag = imag + c.imag;

//         return temp;
//     }
// };

// int main() {
//     Complex c1, c2, c3;

//     cout << "Enter First Complex Number\n";
//     c1.input();

//     cout << "\nEnter Second Complex Number\n";
//     c2.input();

//     c3 = c1.add(c2);

//     cout << "\nFirst Complex Number: ";
//     c1.display();

//     cout << "Second Complex Number: ";
//     c2.display();

//     cout << "Sum: ";
//     c3.display();

//     return 0;
// }

#include <iostream>
using namespace std;

class Time {
    int hours, minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }

    Time add(Time t) {
        Time result;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours + result.minutes / 60;
        result.minutes %= 60;
        return result;
    }
};

int main() {
    Time t1(2, 45);
    Time t2(3, 30);

    cout << "First Duration: ";
    t1.display();

    cout << "Second Duration: ";
    t2.display();

    Time total = t1.add(t2);

    cout << "Total Duration: ";
    total.display();

    return 0;
}