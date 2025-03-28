/*Create a base class Student (Roll_No, Name) which derives two classes Theory and Practical. 
Theory class contains marks of five Subjects and Practical class contains marks of two practical subjects.
 Class Result (Total_Marks, Class) inherits both Theory and Practical classes. 
 (Use concept of Virtual Base Class) Write a menu driven program to perform the following functions:
a. Build a master table.
b. Display master table.*/

#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int Roll_No;
    string Name;
public:
    virtual void build() = 0;
    virtual void display() = 0;
};

class Theory : virtual public Student {
protected:
    int tmarks[5];  
public:
    void build() override {
        cout << "Enter Roll No and Name: ";
        cin >> Roll_No >> Name;

        cout << "Enter 5 Theory Marks: ";
        for (int i = 0; i < 5; i++) {
            cin >> tmarks[i];
        }
    }

    void display() override {
        cout << "Roll No: " << Roll_No << ", Name: " << Name;
        cout << ", Theory Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << tmarks[i] << " ";
        }
    }
};

class Practical : virtual public Student {
protected:
    int pmarks[2];  
public:
    void build() override {
        cout << "Enter 2 Practical Marks: ";
        for (int i = 0; i < 2; i++) {
            cin >> pmarks[i];
        }
    }

    void display() override {
        cout << ", Practical Marks: ";
        for (int i = 0; i < 2; i++) {
            cout << pmarks[i] << " ";
        }
    }
};

class Result : public Theory, public Practical {
    int Total_Marks;
    string Class;

public:
    void build() override {
        Theory::build();
        Practical::build();

        Total_Marks = 0;
        for (int i = 0; i < 5; i++) {
            Total_Marks += tmarks[i];
        }
        for (int i = 0; i < 2; i++) {
            Total_Marks += pmarks[i];
        }

        Class = (Total_Marks >= 300) ? "First" : "Second";
    }

    void display() override {
        Theory::display();
        Practical::display();
        cout << ", Total: " << Total_Marks << ", Class: " << Class << endl;
    }
};

int main() {
    int n, choice;
    cout << "Enter the number of students: ";
    cin >> n;

    Result* students = new Result[n];

    do {
        cout << "\nMENU:\n";
        cout << "1. Build Master Table\n";
        cout << "2. Display Master Table\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < n; i++) {
                    cout << "\nEnter details for student " << i + 1 << ":\n";
                    students[i].build();
                }
                break;

            case 2:
                cout << "\nMaster Table:\n";
                for (int i = 0; i < n; i++) {
                    students[i].display();
                }
                break;

            case 3:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);

    delete[] students;
    return 0;
}
