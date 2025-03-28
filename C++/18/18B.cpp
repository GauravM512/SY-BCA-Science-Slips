/*Write a C++ program to read student information such as rollno, name and percentage of n students. 
Write the student information using file handling.*/

#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int roll;
    string name;
    float per;

public:
    void accept() {
        cout << "Enter roll, name, and percentage: ";
        cin >> roll >> name >> per;
    }

    void write(ofstream &fout) {
        fout << roll << " " << name << " " << per << endl;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << ", Percentage: " << per << "%" << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student s[n];
    
    ofstream fout("18B_student.txt");

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << endl;
        s[i].accept();
        s[i].write(fout);
    }
    
    fout.close();
    cout << "\nStudent data written to file successfully." << endl;

    // Reading and displaying the data
    ifstream fin("student.txt");
    cout << "\nDisplaying Student Information from file:" << endl;

    while (fin >> n >> ws >> s[0].name >> s[0].per) {
        s[0].display();
    }

    fin.close();
    
    return 0;
}
