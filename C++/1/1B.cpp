/*Write a C++ program to create a class Array that contains one float array as member. Overload
the Unary ++ and -- operators to increase or decrease the value of each element of an array. Use
friend function for operator function.*/

#include <iostream>
using namespace std;

class Array {
    float arr[5];

public:
    void getData() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    friend Array& operator++(Array &a);  
    friend Array& operator--(Array &a);  
};

Array& operator++(Array &a) {
    for (int i = 0; i < 5; i++) {
        a.arr[i]++;
    }
    return a;  
}

Array& operator--(Array &a) {
    for (int i = 0; i < 5; i++) {
        a.arr[i]--;
    }
    return a;  
}

int main() {
    Array A;
    A.getData();

    cout << "Original Array: ";
    A.display();

    ++A;
    cout << "After ++ : ";
    A.display();

    --A;
    cout << "After -- : ";
    A.display();

    return 0;
}
