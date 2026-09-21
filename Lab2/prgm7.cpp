#include <iostream>         //reference
using namespace std;

void updateSalary(float &newSalary)
{
    newSalary = newSalary + (newSalary * 10 / 100);
}

int main()
{
    float salary = 50000;
    updateSalary(salary);
    cout << "Salary = " << salary << endl;
    return 0;
}


// #include <iostream>       //pointer
// using namespace std;

// void updateSalary(float *newSalary)
// {
//     *newSalary = *newSalary + (*newSalary * 10 / 100);
// }

// int main()
// {
//     float salary = 50000;
//     updateSalary(&salary);
//     cout << "Salary = " << salary << endl;
//     return 0;
// }