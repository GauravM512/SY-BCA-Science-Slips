/*Write a C++ program to create a text file which stores employee information as emp_id, emp_name, emp_sal).
 Write a menu driven program with the options
a. Append
b. Modify
c. Display
d. Exit*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee {
    int emp_id;
    string emp_name;
    float emp_sal;

public:
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, emp_name);
        cout << "Enter Employee Salary: ";
        cin >> emp_sal;
    }

    void display() {
        cout << emp_id << " " << emp_name << " " << emp_sal << endl;
    }

    int getID() {
        return emp_id;
    }

    void writeToFile(ofstream &out) {
        out << emp_id << " " << emp_name << " " << emp_sal << endl;
    }

    bool readFromFile(ifstream &in) {
        in >> emp_id >> ws;
        getline(in, emp_name, ' ');
        in >> emp_sal;
        return !in.fail();
    }
};

void appendEmployee() {
    Employee emp;
    emp.accept();

    ofstream fout("employee.txt", ios::app);  // Append mode
    if (!fout) {
        cout << "Error opening file!\n";
        return;
    }

    emp.writeToFile(fout);
    fout.close();
    cout << "Employee appended successfully.\n";
}

void displayEmployees() {
    ifstream fin("employee.txt");
    if (!fin) {
        cout << "No records found or error opening file!\n";
        return;
    }

    Employee emp;
    cout << "\nEmployee Details:\n";
    while (emp.readFromFile(fin)) {
        emp.display();
    }
    fin.close();
}

void modifyEmployee() {
    int id, found = 0;
    cout << "Enter Employee ID to modify: ";
    cin >> id;

    ifstream fin("employee.txt");
    ofstream fout("temp.txt");

    if (!fin || !fout) {
        cout << "Error opening file!\n";
        return;
    }

    Employee emp;
    while (emp.readFromFile(fin)) {
        if (emp.getID() == id) {
            cout << "Enter new details:\n";
            emp.accept();
            found = 1;
        }
        emp.writeToFile(fout);
    }

    fin.close();
    fout.close();

    remove("employee.txt");
    rename("temp.txt", "employee.txt");

    if (found)
        cout << "Employee modified successfully.\n";
    else
        cout << "Employee not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\nMENU:\n";
        cout << "1. Append Employee\n";
        cout << "2. Modify Employee\n";
        cout << "3. Display Employees\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                appendEmployee();
                break;
            case 2:
                modifyEmployee();
                break;
            case 3:
                displayEmployees();
                break;
            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
