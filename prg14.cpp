
#include <iostream>
using namespace std;

class Person //single inh
{
public:
    void showPerson()
    {
        cout << "I am a Person" << endl;
    }
};

class Student : public Person
{
public:
    void showStudent()
    {
        cout << "I am a Student" << endl;
    }
};

class Result : public Student    //multilevel inh
{
public:
    void showResult()
    {
        cout << "Student Result: Pass" << endl;
    }
};

int main()
{
    Student s;
    cout << "Single Inheritance:" << endl;
    s.showPerson();
    s.showStudent();

    Result r;
    cout << "Multilevel Inheritance:" << endl;
    r.showPerson();
    r.showStudent();
    r.showResult();

    return 0;
}
