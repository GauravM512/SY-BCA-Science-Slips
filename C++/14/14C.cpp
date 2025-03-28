/*Create a class Fraction that contains two data members as numerator and denominator.
Write a C++ program to overload following operators
a. ++ Unary (pre and post both)
b. << and >> Overload as friend functions*/

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:

    Fraction(int num = 0, int den = 1) {
        numerator = num;
        denominator = (den != 0) ? den : 1;  
    }

    // Overloading << and >> as friend functions
    friend ostream& operator<<(ostream& out, const Fraction& f);
    friend istream& operator>>(istream& in, Fraction& f);

    // Pre-increment operator (++f)
    Fraction& operator++() {
        numerator += denominator;  
        return *this;
    }

    // Post-increment operator (f++)
    Fraction operator++(int) {
        Fraction temp = *this;   
        numerator += denominator;
        return temp;             
    }
};

// Overload << operator
ostream& operator<<(ostream& out, const Fraction& f) {
    out << f.numerator << "/" << f.denominator;
    return out;
}

// Overload >> operator
istream& operator>>(istream& in, Fraction& f) {
    cout << "Enter numerator: ";
    in >> f.numerator;
    cout << "Enter denominator: ";
    in >> f.denominator;

    if (f.denominator == 0) {
        cout << "Denominator cannot be zero! Setting it to 1." << endl;
        f.denominator = 1;
    }

    return in;
}

int main() {
    Fraction f1, f2;

    cout << "Enter fraction 1:" << endl;
    cin >> f1;
    
    cout << "Enter fraction 2:" << endl;
    cin >> f2;

    cout << "\nOriginal Fractions:" << endl;
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;

    cout << "\nUsing Pre-Increment (++f1):" << endl;
    ++f1;
    cout << "f1 = " << f1 << endl;

    cout << "\nUsing Post-Increment (f2++):" << endl;
    Fraction temp = f2++;
    cout << "Old f2 = " << temp << endl;  /
    cout << "New f2 = " << f2 << endl;    /

    return 0;
}
