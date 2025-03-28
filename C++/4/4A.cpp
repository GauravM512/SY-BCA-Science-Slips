/*Write a C++ program to print area of circle, square and rectangle using inline function.*/

#include <iostream>
using namespace std;

inline float areaCircle(float r) {
    return 3.14 * r * r;
}

inline int areaSquare(int side) {
    return side * side;
}

inline int areaRectangle(int l, int b) {
    return l * b;
}

int main() {
    cout << "Area of Circle (r=3): " << areaCircle(3) << endl;
    cout << "Area of Square (side=4): " << areaSquare(4) << endl;
    cout << "Area of Rectangle (4x5): " << areaRectangle(4, 5) << endl;
    return 0;
}
