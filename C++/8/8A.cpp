/*Write a C++ program to subtract two integer numbers of two different classes using friend function.*/

#include <iostream>
using namespace std;

class A;  

class B {
    int b;
public:
    void get() {
        cout << "Enter B: "; 
        cin >> b;
    }
    friend void subtract(A, B);
};

class A {
    int a;
public:
    void get() {
        cout << "Enter A: "; 
        cin >> a;
    }
    friend void subtract(A, B);
};

void subtract(A x, B y) {
    cout << "Subtraction = " << x.a - y.b << endl;
}

int main() {
    A a;
    B b;

    a.get();
    b.get();

    subtract(a, b);

    return 0;
}
