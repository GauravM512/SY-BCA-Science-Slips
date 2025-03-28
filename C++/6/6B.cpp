/*Write a C++ program to design a class complex to represent complex number. 
The complex class uses an external function (as a friend function) to add two complex number. 
The function should return an object of type complex representing the sum of two complex Numbers.*/

#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    void getData() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void show() {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex add(Complex, Complex);
};

Complex add(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1, c2, c3;

    c1.getData();
    c2.getData();

    c3 = add(c1, c2);

    cout << "Sum: ";
    c3.show();

    return 0;
}
