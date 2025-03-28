/*Write a C++ program to create a class employee containing salary as a data member. 
Write necessary member functions to overload the operator unary pre and post decrement "--"
for decrementing salary.*/

#include <iostream>
using namespace std;

class Employee {
    float sal;

public:
    void get() {
        cout << "Enter salary: ";
        cin >> sal;
    }

    void show() {
        cout << "Salary = " << sal << endl;
    }

    void operator--() { --sal; }
    void operator--(int) { sal--; }
};

int main() {
    Employee e;
    e.get();
    --e;
    e--;
    e.show();
    return 0;
}
