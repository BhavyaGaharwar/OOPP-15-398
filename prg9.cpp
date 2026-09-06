// #include <iostream>
// #include <string>
// using namespace std;

// class Book {
//     int id;
//     string title;
//     string author;

// public:
//     void input() {
//         cout << "Enter Book ID: ";
//         cin >> id;
//         cin.ignore();

//         cout << "Enter Book Title: ";
//         getline(cin, title);

//         cout << "Enter Author Name: ";
//         getline(cin, author);
//     }

//     void display() {
//         cout << "Book ID: " << id << endl;
//         cout << "Title: " << title << endl;
//         cout << "Author: " << author << endl;
//     }
// };

// int main() {
//     int n;

//     cout << "Enter number of books: ";
//     cin >> n;

//     Book* books = new Book[n];

//     cout << "\nEnter Book Details\n";
//     for (int i = 0; i < n; i++) {
//         cout << "\nBook " << i + 1 << endl;
//         books[i].input();
//     }

//     cout << "\nBook Records\n";
//     for (int i = 0; i < n; i++) {
//         cout << "\nBook " << i + 1 << endl;
//         books[i].display();
//     }

//     Book* ptr = &books[0];

//     cout << "\nAccessing First Book Using Pointer to Object\n";
//     ptr->display();

//     delete[] books;

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNo;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Roll No: "<<endl;;
        cin >> rollNo;

        cout << "Enter Name: "<<endl;
        cin>>name;

        cout << "Enter Marks: "<<endl;
        cin >> marks;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic array of objects
    Student* students = new Student[n];

    cout << "\nEnter Student Details\n";

    // Accessing array of objects
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        students[i].input();
    }

    cout << "\nStudent Records\n";

    // Displaying array of objects
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        students[i].display();
    }

    // Pointer to object
    Student* ptr = &students[0];

    cout << "\nAccessing First Student Using Pointer\n";
    ptr->display();

    // Deallocate memory
    delete[] students;

    return 0;
}