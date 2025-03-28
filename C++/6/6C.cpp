/*Design two base classes Employee (Name, Designation) and Project (Project_Id, title). 
Derive a class Emp_Proj(Duration) from Employee and Project. Write a menu driven program to
a. Build a master table. Display a master table
b. Display Project details in the ascending order of duration.*/

#include <iostream>
#include <algorithm>  
using namespace std;

class Employee {
protected:
    string name, designation;
public:
    void acceptEmployee() {
        cout << "Enter Name and Designation: ";
        cin >> name >> designation;
    }

    void displayEmployee() const {
        cout << name << " " << designation << " ";
    }
};

class Project {
protected:
    int pid;
    string title;
public:
    void acceptProject() {
        cout << "Enter Project ID and Title: ";
        cin >> pid >> title;
    }

    void displayProject() const {
        cout << pid << " " << title << " ";
    }
};

class Emp_Proj : public Employee, public Project {
    int duration;
public:
    void accept() {
        acceptEmployee();
        acceptProject();
        cout << "Enter Duration: ";
        cin >> duration;
    }

    void display() const {
        displayEmployee();
        displayProject();
        cout << duration << endl;
    }

    int getDuration() const {
        return duration;
    }
};

int main() {
    int n;
    cout << "Enter the number of records: ";
    cin >> n;

    Emp_Proj *e = new Emp_Proj[n]; 

    int choice;
    do {
        cout << "\nMENU:\n";
        cout << "1. Build Master Table\n";
        cout << "2. Display Master Table\n";
        cout << "3. Display Projects Sorted by Duration\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nBuilding Master Table:\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nEnter details for record " << i + 1 << ":\n";
                    e[i].accept();
                }
                cout << "\nMaster table created successfully.\n";
                break;

            case 2:
                cout << "\nMaster Table:\n";
                for (int i = 0; i < n; i++) {
                    e[i].display();
                }
                break;

            case 3:
                // Sorting by duration using Bubble Sort
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (e[j].getDuration() > e[j + 1].getDuration()) {
                            swap(e[j], e[j + 1]);
                        }
                    }
                }
                cout << "\nProjects Sorted by Duration:\n";
                for (int i = 0; i < n; i++) {
                    e[i].display();
                }
                break;

            case 4:
                cout << "\nExiting program. Goodbye!\n";
                break;

            default:
                cout << "\nInvalid choice. Try again.\n";
        }

    } while (choice != 4);

    delete[] e; 
    return 0;
}
