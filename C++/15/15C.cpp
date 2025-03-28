/*Write C++ program to create a class Employee containing data members Emp_no, Emp_Name, Designation and Salary. 
Create and initialize the objects using default, parameterized and Copy Constructor. 
Also write member function to calculate Income tax of the employee which is 20% of salary.*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
    int no;
    string name, desig;
    double sal;

public:
    // Default Constructor
    Employee() : no(0), name("N/A"), desig("N/A"), sal(0.0) {}

    // Parameterized Constructor
    Employee(int n, string nm, string dg, double s) : no(n), name(nm), desig(dg), sal(s) {}

    // Copy Constructor
    Employee(const Employee &e) : no(e.no), name(e.name), desig(e.desig), sal(e.sal) {}

    double tax() {
        return sal * 0.20;
    }

    void display() {
        cout << "No: " << no << endl;
        cout << "Name: " << name << endl;
        cout << "Designation: " << desig << endl;
        cout << "Salary: " << sal << endl;
        cout << "Tax (20%): " << tax() << endl;
    }
};

int main() {
    Employee sanchet(101, "Sanchet Kolekar", "Developer", 60000);
    cout << "\nParameterized Constructor Employee:" << endl;
    sanchet.display();

    Employee copy = sanchet;
    cout << "\nCopy Constructor Employee:" << endl;
    copy.display();

    return 0;
}
