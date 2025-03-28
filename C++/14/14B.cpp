/*Write a C++ program to define a class Bus with the following specifications:
 Bus No, Bus Name, No of Seats, Starting point, Destination .Write a menu driven program by using appropriate manipulators to
a. Accept details of n buses.
b. Display all bus details.
c. Display details of bus from specified starting point to destination*/

#include <iostream>
#include <iomanip>  
#include <string>
using namespace std;

class Bus {
    int Bus_No;
    string Bus_Name;
    int No_of_Seats;
    string Start, Destination;

public:
    // Function to accept bus details
    void accept() {
        cout << "\nEnter Bus No: ";
        cin >> Bus_No;
        cout << "Enter Bus Name: ";
        cin.ignore();
        getline(cin, Bus_Name);
        cout << "Enter No of Seats: ";
        cin >> No_of_Seats;
        cout << "Enter Starting Point: ";
        cin >> Start;
        cout << "Enter Destination: ";
        cin >> Destination;
    }

    // Function to display bus details in tabular format
    void display() const {
        cout << left << setw(10) << Bus_No
             << setw(15) << Bus_Name
             << setw(10) << No_of_Seats
             << setw(15) << Start
             << setw(15) << Destination << endl;
    }

    // Function to check if bus matches the given route
    bool matchRoute(const string& s, const string& d) const {
        return (Start == s && Destination == d);
    }
};

// Function to accept bus details
void acceptBuses(Bus buses[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Bus " << i + 1 << ":";
        buses[i].accept();
    }
}

// Function to display all bus details
void displayAllBuses(const Bus buses[], int n) {
    cout << "\nBus Details:\n";
    cout << left << setw(10) << "Bus No"
         << setw(15) << "Bus Name"
         << setw(10) << "Seats"
         << setw(15) << "Start"
         << setw(15) << "Destination" << endl;

    for (int i = 0; i < n; i++) {
        buses[i].display();
    }
}

// Function to display buses matching the specified route
void displayRouteBuses(const Bus buses[], int n) {
    string src, dest;
    cout << "\nEnter source: ";
    cin >> src;
    cout << "Enter destination: ";
    cin >> dest;

    cout << "\nMatching Buses:\n";
    cout << left << setw(10) << "Bus No"
         << setw(15) << "Bus Name"
         << setw(10) << "Seats"
         << setw(15) << "Start"
         << setw(15) << "Destination" << endl;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (buses[i].matchRoute(src, dest)) {
            buses[i].display();
            found = true;
        }
    }

    if (!found) {
        cout << "\nNo buses found on this route!" << endl;
    }
}

// Main function
int main() {
    int n, choice;

    cout << "Enter the number of buses: ";
    cin >> n;

    Bus* buses = new Bus[n];  // Dynamic memory allocation

    do {
        cout << "\nMenu:\n";
        cout << "1. Accept details of buses\n";
        cout << "2. Display all bus details\n";
        cout << "3. Display buses from specified source to destination\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                acceptBuses(buses, n);
                break;

            case 2:
                displayAllBuses(buses, n);
                break;

            case 3:
                displayRouteBuses(buses, n);
                break;

            case 4:
                cout << "\nExiting the program. Goodbye!" << endl;
                delete[] buses;  // Free allocated memory
                break;

            default:
                cout << "\nInvalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
