/*Write a C++ program to read two float numbers. 
Perform arithmetic binary operations +,-,*,/ on these numbers using inline function. Display the resultant value.*/

#include <iostream>
using namespace std;

inline float add(float a, float b) { return a + b; }
inline float sub(float a, float b) { return a - b; }
inline float mul(float a, float b) { return a * b; }
inline float div(float a, float b) { return b != 0 ? a / b : 0; }

int main() {
    float x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Add: " << add(x, y) << endl
         << "Sub: " << sub(x, y) << endl
         << "Mul: " << mul(x, y) << endl
         << "Div: " << div(x, y) << endl;

    return 0;
}
