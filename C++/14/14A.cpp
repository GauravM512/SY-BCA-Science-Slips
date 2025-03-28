/*Write a C++ program to interchange values of two integer numbers (use call by reference).*/

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "\nBefore swap: x = " << x << ", y = " << y << endl;

    swap(x, y);

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}
