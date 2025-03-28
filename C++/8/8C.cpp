/*Write a C++ program to create a class Date which contains three data members as dd,mm,yyyy. 
Create and initialize the object by using parameterized constructor and display date in dd-month- yyyy format.
 (Input: 19-12-2014 Output: 19-Dec-2014) Perform validation for month. [20]*/

 #include <iostream>
#include <string>
using namespace std;

class Date {
    int dd, mm, yyyy;

    string getMonthName(int m) {
        string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                           "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        return (m >= 1 && m <= 12) ? months[m - 1] : "Invalid";
    }

public:
    Date(int d, int m, int y) {
        if (m < 1 || m > 12) {
            cout << "Invalid month. Setting to January.\n";
            mm = 1;
        } else {
            mm = m;
        }
        dd = d;
        yyyy = y;
    }

    void display() {
        cout << dd << "-" << getMonthName(mm) << "-" << yyyy << endl;
    }
};

int main() {
    int d, m, y;

    cout << "Enter date (dd mm yyyy): ";
    cin >> d >> m >> y;

    Date date(d, m, y);
    cout << "Formatted date: ";
    date.display();

    return 0;
}
