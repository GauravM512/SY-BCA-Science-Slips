/*Create a Base class Train containing protected data members as Train_no, Train_Name. Derive a class Route(Route_id, Source, Destination) from Train class. Also derive a class Reservation (Number_of_Seats, Train_Class, Fare, Travel_Date) from Route. Write a C++ program
to perform following necessary functions:
a. Enter details of n reservations
b. Display details of all reservations
c. Display reservation details of a specified Train class */

#include <iostream>
#include <string>
using namespace std;

class Train {
protected:
    int Train_no;
    string Train_Name;
};

class Route : public Train {
protected:
    int Route_id;
    string Source, Destination;
};

class Reservation : public Route {
    int Number_of_Seats;
    string Train_Class;
    float Fare;
    string Travel_Date;

public:
    void enter() {
        cout << "Enter Train No, Name, Route ID, Source, Destination: ";
        cin >> Train_no >> Train_Name >> Route_id >> Source >> Destination;
        
        cout << "Enter No. of Seats, Class, Fare, Travel Date: ";
        cin >> Number_of_Seats >> Train_Class >> Fare >> Travel_Date;
    }

    void display() {
        cout << "Train No: " << Train_no
             << ", Name: " << Train_Name
             << ", Route ID: " << Route_id
             << ", Source: " << Source
             << ", Destination: " << Destination
             << ", Seats: " << Number_of_Seats
             << ", Class: " << Train_Class
             << ", Fare: " << Fare
             << ", Date: " << Travel_Date << endl;
    }

    bool matchClass(const string &cls) {
        return Train_Class == cls;
    }
};

int main() {
    int n;
    cout << "Enter the number of reservations: ";
    cin >> n;

    Reservation *r = new Reservation[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Reservation " << i + 1 << ":\n";
        r[i].enter();
    }

    cout << "\nAll Reservations:\n";
    for (int i = 0; i < n; i++) {
        r[i].display();
    }

    string cls;
    cout << "\nEnter Train Class to filter: ";
    cin >> cls;

    cout << "\nReservations for class: " << cls << "\n";
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (r[i].matchClass(cls)) {
            r[i].display();
            found = true;
        }
    }

    if (!found) {
        cout << "No reservations found for class: " << cls << endl;
    }

    delete[] r;  
    return 0;
}
