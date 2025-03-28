/*Write a C++ program to create a class Distance which contains data members as kilometer, meter.
Write a program to perform the following functions a.To accept distance
b.To display distance
c.To overload > operator to compare two distance*/

#include <iostream>
using namespace std;

class Distance {
    int km, m;

public:
    void accept() {
        cout << "Enter distance (km and m): ";
        cin >> km >> m;
    }

    void display() {
        cout << km << " km " << m << " m" << endl;
    }

    bool operator>(Distance d) {
        int t1 = km * 1000 + m;        // Convert first distance to meters
        int t2 = d.km * 1000 + d.m;    // Convert second distance to meters
        return t1 > t2;
    }
};

int main() {
    Distance d1, d2;

    cout << "Enter first distance:" << endl;
    d1.accept();

    cout << "Enter second distance:" << endl;
    d2.accept();

    cout << "\nFirst Distance: ";
    d1.display();

    cout << "Second Distance: ";
    d2.display();

    if (d1 > d2)
        cout << "\nFirst distance is greater." << endl;
    else
        cout << "\nSecond distance is greater." << endl;

    return 0;
}
