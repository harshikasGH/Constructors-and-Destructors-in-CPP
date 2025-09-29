// Harshika Kamwal
// 25070123508

#include <iostream>
using namespace std;

class Date {
    int d;
    int m;
    int y;

public:
    Date(int day, int month, int year);
    void display();
};

Date::Date(int day, int month, int year) {
    d = day;
    m = month;
    y = year;
}

void Date::display() {
    cout << "Today's date is: " << d << "/" << m << "/" << y << endl;
}

int main() {
    int day, month, year;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    Date d1(day, month, year);
    d1.display();
    return 0;
}

// OUTPUT
// Enter day: 28
// Enter month: 08
// Enter year: 2025
// Today's date is: 28/8/2025