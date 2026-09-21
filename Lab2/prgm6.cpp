#include <iostream>
using namespace std;

int main()
{
    float salary = 50000;

    // Pointer stores address of salary
    float *newSalary = &salary;

    // Update salary using pointer
    *newSalary = *newSalary + (*newSalary * 10 / 100);

    // Printing using old variable
    cout << "Salary = " << salary << endl;

    return 0;
}