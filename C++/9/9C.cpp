/*Create a class Time which contains data members as: Hours, Minutes and Seconds. Write a C++ program to perform following necessary member functions:
a. To read time
b. To display time in format like: hh:mm:ss
c. To add two different times (Use Objects as argument)*/

#include <iostream>
#include <iomanip>
using namespace std;

class Time {
    int h, m, s;

public:
    void read() {
        cout << "Enter time (HH MM SS): ";
        cin >> h >> m >> s;
        if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
            cout << "Invalid time. Try again." << endl;
            read();
        }
    }

    void display() const {
        cout << setw(2) << setfill('0') << h << ":"
             << setw(2) << setfill('0') << m << ":"
             << setw(2) << setfill('0') << s << endl;
    }

    Time add(const Time &t) const {
        Time r;
        r.s = s + t.s;
        r.m = m + t.m + (r.s / 60);
        r.s %= 60;
        r.h = h + t.h + (r.m / 60);
        r.m %= 60;
        r.h %= 24;
        return r;
    }
};

int main() {
    Time t1, t2, t3;
    cout << "Enter first time:" << endl;
    t1.read();
    cout << "\nEnter second time:" << endl;
    t2.read();

    cout << "\nFirst Time: ";
    t1.display();
    cout << "Second Time: ";
    t2.display();

    t3 = t1.add(t2);
    cout << "\nSum of the two times: ";
    t3.display();

    return 0;
}
