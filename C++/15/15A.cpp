/*Write a C++ program to check minimum and maximum of two integer number (use inline function and conditional operator)*/

#include <iostream>
using namespace std;

inline int minimum(int a, int b) {
    return (a < b) ? a : b;
}

inline int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "Minimum: " << minimum(x, y) << endl;
    cout << "Maximum: " << maximum(x, y) << endl;

    return 0;
}
