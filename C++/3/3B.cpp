/*Write a C++ program with Student as abstract class and create derive classes Engineering, Medicine and 
Science having data member rollno and name from base class Student. 
Create objects of the derived classes and access them using array of pointer of base class Student.*/

#include <iostream>
using namespace std;

class Student {
protected:
    int rollno;
    string name;
public:
    virtual void accept() = 0;  
    virtual void display() = 0;  
    virtual ~Student() {}  
};

class Engineering : public Student {
public:
    void accept() {
        cout << "Enter rollno and name for Engineering student: ";
        cin >> rollno >> name;
    }
    void display() {
        cout << "Engineering Student - Roll No: " << rollno << ", Name: " << name << endl;
    }
};

class Medicine : public Student {
public:
    void accept() {
        cout << "Enter rollno and name for Medicine student: ";
        cin >> rollno >> name;
    }
    void display() {
        cout << "Medicine Student - Roll No: " << rollno << ", Name: " << name << endl;
    }
};

class Science : public Student {
public:
    void accept() {
        cout << "Enter rollno and name for Science student: ";
        cin >> rollno >> name;
    }
    void display() {
        cout << "Science Student - Roll No: " << rollno << ", Name: " << name << endl;
    }
};

int main() {
    Student* s[3]; 

    s[0] = new Engineering();
    s[1] = new Medicine();
    s[2] = new Science();

    for (int i = 0; i < 3; i++) {
        s[i]->accept();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 3; i++) {
        s[i]->display();
        delete s[i];  // Free allocated memory
    }

    return 0;
}
