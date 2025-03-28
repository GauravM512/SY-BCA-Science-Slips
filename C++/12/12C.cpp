/*Implement the following class hierarchy: Employee: code, ename, desg
Manager (derived from Employee): year_of_experience, salary Define appropriate functions to accept and display details.
Create n objects of the manager class and display the records.
Write main function that uses the above class and its member functions.*/

#include <iostream>
#include <string>
using namespace std;

// Base class: Employee
class Employee {
protected:
    int code;
    string ename;
    string desg;

public:
    void accept() {
        cout << "Enter Employee Code: ";
        cin >> code;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, ename);
        cout << "Enter Designation: ";
        getline(cin, desg);
    }

    void display() const {
        cout << "Code: " << code << ", Name: " << ename << ", Designation: " << desg;
    }
};

// Derived class: Manager
class Manager : public Employee {
    int year_of_experience;
    float salary;

public:
    void accept() {
        Employee::accept();  // Call base class accept function
        cout << "Enter Years of Experience: ";
        cin >> year_of_experience;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() const {
        Employee::display();  // Call base class display function
        cout << ", Experience: " << year_of_experience << " years"
             << ", Salary: " << salary << endl;
    }
};

int main() {
    int n;

    cout << "Enter the number of managers: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of managers!" << endl;
        return 1;
    }

    Manager *managers = new Manager[n];  // Dynamically allocate memory for n objects

    // Accept details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Manager " << i + 1 << ":\n";
        managers[i].accept();
    }

    // Display details
    cout << "\nManager Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "Manager " << i + 1 << " -> ";
        managers[i].display();
    }

    // Free dynamically allocated memory
    delete[] managers;

    return 0;
}
