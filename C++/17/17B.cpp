/*Create a class Fraction containing data members as Numerator and Denominator.
Write a program to overload operators ++ , -- and * to increment, decrement a Fraction and multiply two Fraction respectively. 
(Use constructor to initialize values of an object)*/

#include <iostream>
using namespace std;

class Fraction {
    int num, den;

public:
    Fraction(int n = 1, int d = 1) : num(n), den(d) {}

    void display() {
        cout << num << "/" << den << endl;
    }

    Fraction operator++() {
        ++num;
        return *this;
    }

    Fraction operator--() {
        --num;
        return *this;
    }

    Fraction operator*(const Fraction& f) {
        return Fraction(num * f.num, den * f.den);
    }
};

int main() {
    Fraction f1(2, 3), f2(3, 4);

    ++f1;
    f1.display();

    --f2;
    f2.display();

    Fraction f3 = f1 * f2;
    f3.display();

    return 0;
}
