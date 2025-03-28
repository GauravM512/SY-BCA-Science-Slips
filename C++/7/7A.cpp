/*Write a C++ program using class which contains two data members as type integer. 
Create and initialize the objects using default constructor, parameterized constructor with default value. 
Write a member function to display maximum from given two numbers for all objects. [10]*/

#include <iostream>
using namespace std;

class Number {
    int a, b;

public:
    Number() {
        a = 0;
        b = 0;
    }

    Number(int x, int y = 0) {
        a = x;
        b = y;
    }

    void displayMax() {
        cout << "Max = " << (a > b ? a : b) << endl;
    }
};

int main() {
    Number n1;               
    Number n2(10);           
    Number n3(5, 15);        

    cout << "For n1: ";  
    n1.displayMax();

    cout << "For n2: ";  
    n2.displayMax();

    cout << "For n3: ";  
    n3.displayMax();

    return 0;
}
