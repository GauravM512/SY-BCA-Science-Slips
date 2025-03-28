/*Write a C++ program to create a class Department which contains data members as 
Dept_Id, Dept_Name, H.O.D., Number_Of_staff. Write necessary member functions to
a. Accept details from user for ‘n’ departments and write it in a file “Dept.txt”.
b. Display details of department from a file.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Department {
    int id;
    string name, hod;
    int staff;

public:
    void accept() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Department Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter H.O.D. Name: ";
        getline(cin, hod);
        cout << "Enter Number of Staff: ";
        cin >> staff;
    }

    void write(ofstream &fout) {
        fout << id << " " << name << " " << hod << " " << staff << endl;
    }

    void read(ifstream &fin) {
        fin >> id >> name >> hod >> staff;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Department: " << name << endl;
        cout << "H.O.D.: " << hod << endl;
        cout << "Staff: " << staff << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of departments: ";
    cin >> n;

    Department *d = new Department[n];

    ofstream fout("Dept.txt");
    if (!fout) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for department " << i + 1 << ":\n";
        d[i].accept();
        d[i].write(fout);
    }
    fout.close();
    cout << "\nDepartment details saved to file successfully!" << endl;

    ifstream fin("Dept.txt");
    if (!fin) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nDepartments from file:\n";
    Department d2;
    while (fin >> ws && !fin.eof()) {  
        d2.read(fin);
        if (fin)  
            d2.display();
    }
    
    fin.close();

    delete[] d;

    return 0;
}
