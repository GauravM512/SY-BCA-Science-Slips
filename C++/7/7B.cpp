/*Create a class College containing data members as College_Id, College_Name,
Establishment_year, University_Name. Write a C++ program with following functions
a. Accept n College details
b. Display College details of specified University
c. Display College details according to Establishment year (Use Array of Objects and Function Overloading).*/

#include <iostream>
#include <string>
using namespace std;

class College {
    int id;                  // College ID
    string name;              // College Name
    int year;                 // Establishment Year
    string uni;               // University Name

public:
    void accept() {
        cout << "Enter ID, Name, Year, University: ";
        cin >> id >> name >> year >> uni;
    }

    void display() {
        cout << id << " " << name << " " << year << " " << uni << endl;
    }

    bool matchUni(const string& u) {
        return uni == u;
    }

    bool olderThan(int y) {
        return year < y;
    }
};

// Function overloading for displaying colleges
void displayColleges(College c[], int n, const string& u) {
    cout << "\nColleges from '" << u << "':\n";
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (c[i].matchUni(u)) {
            c[i].display();
            found = true;
        }
    }
    if (!found) {
        cout << "No colleges found from " << u << ".\n";
    }
}

void displayColleges(College c[], int n, int y) {
    cout << "\nColleges established before " << y << ":\n";
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (c[i].olderThan(y)) {
            c[i].display();
            found = true;
        }
    }
    if (!found) {
        cout << "No colleges found before " << y << ".\n";
    }
}

int main() {
    int n = 3;           // Number of colleges
    College c[n];

    cout << "Enter details for " << n << " colleges:\n";
    for (int i = 0; i < n; i++) {
        c[i].accept();
    }

    string u;
    cout << "\nEnter University name to search: ";
    cin >> u;
    displayColleges(c, n, u);

    int y;
    cout << "\nEnter year to search colleges before: ";
    cin >> y;
    displayColleges(c, n, y);

    return 0;
}
