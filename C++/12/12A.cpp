/*Write a C++ program to accept length and width of a rectangle. 
Calculate and display perimeter as well as area of a rectangle by using inline function.*/

#include <iostream>
using namespace std;

inline int area(int l, int w) { return l * w; }
inline int perimeter(int l, int w) { return 2 * (l + w); }

int main() {
    int l, w;
    cout << "Enter length and width: ";
    cin >> l >> w;

    cout << "Area = " << area(l, w) << endl;
    cout << "Perimeter = " << perimeter(l, w) << endl;

    return 0;
}
