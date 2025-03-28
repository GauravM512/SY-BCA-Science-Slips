/*Write a C++ program to create a class Number which contains two integer data members. 
Create and initialize the object by using default constructor, parameterized constructor. 
Write a member function to display maximum from given two numbers for all objects.*/

#include <iostream>
using namespace std;

class Number {
    int a, b;

public:
    // Default Constructor
    Number() : a(0), b(0) {}

    // Parameterized Constructor
    Number(int x, int y) : a(x), b(y) {}

    void max() {
        cout << "Max = " << (a > b ? a : b) << endl;
    }
};

int main() {
    Number n1, n2(10, 20); 

    cout << "For n1: ";
    n1.max();

    cout << "For n2: ";
    n2.max();

    return 0;
}
