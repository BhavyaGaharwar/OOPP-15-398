#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }

    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    Student(const Student &s)
    {
        rollNo = s.rollNo;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    ~Student()
    {
        cout << "Destructor Called for " << name << endl;
    }
};

int main()
{
    Student s1;
    s1.display();

    Student s2(101, "Rahul");
    s2.display();

    Student s3 = s2;
    s3.display();

    return 0;
}
