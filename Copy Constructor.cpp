// Harshika Kamwal
// 25070123508

#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
    int roll_no;
public:
    Student(string n, int a,int r) {
        name = n;
        age = a;
        roll_no= r;
    }

    Student(const Student &s) {
        name = s.name;
        age  = s.age;
        roll_no = s.roll_no;
        cout << "Copy constructor called!\n";
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << roll_no << endl;
    }
};

int main() {
    Student s1("Aditya", 19, 005);
    cout << "Original object:\n";
    s1.display();

    Student s2 = s1;
    cout << "\nCopied object:\n";
    s2.display();

    return 0;
}

// OUTPUT
// Original object:
// Name: Aditya, Age: 19, Roll Number: 5
// Copy constructor called!

// Copied object:
// Name: Aditya, Age: 19, Roll Number: 5