/*Create a base class Flight containing protected data members as Flight_no, Flight_Name. Derive a class Route(Source, Destination) from class Flight. Also derive a class Reservation (no_seats, class, fare, travel_date) from Route. Write a C++ program to perform the following necessary functions.
a. Enter details of n reservations.
b. Display reservation details of Business class.*/

#include <iostream>
#include <string>
using namespace std;

class Flight {
protected:
    int flight_no;
    string flight_name;

public:
    void acceptFlight() {
        cout << "Enter Flight No: ";
        cin >> flight_no;
        cout << "Enter Flight Name: ";
        cin >> flight_name;
    }

    void displayFlight() const {
        cout << "Flight No: " << flight_no << ", Flight Name: " << flight_name << endl;
    }
};

class Route : public Flight {
protected:
    string source, destination;

public:
    void acceptRoute() {
        acceptFlight();
        cout << "Enter Source: ";
        cin >> source;
        cout << "Enter Destination: ";
        cin >> destination;
    }

    void displayRoute() const {
        displayFlight();
        cout << "Source: " << source << ", Destination: " << destination << endl;
    }
};

class Reservation : public Route {
    int no_seats;
    string travel_class;  
    float fare;
    string travel_date;

public:
    void acceptReservation() {
        acceptRoute();
        cout << "Enter No. of Seats: ";
        cin >> no_seats;
        cout << "Enter Class (Economy/Business): ";
        cin >> travel_class;
        cout << "Enter Fare: ";
        cin >> fare;
        cout << "Enter Travel Date (YYYY-MM-DD): ";
        cin >> travel_date;
    }

    void displayReservation() const {
        displayRoute();
        cout << "Seats: " << no_seats 
             << ", Class: " << travel_class 
             << ", Fare: " << fare 
             << ", Travel Date: " << travel_date << endl;
    }

    string getClass() const {
        return travel_class;
    }
};

int main() {
    int n;
    cout << "Enter number of reservations: ";
    cin >> n;

    Reservation* reservations = new Reservation[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for Reservation " << i + 1 << ":\n";
        reservations[i].acceptReservation();
    }

    cout << "\nBusiness Class Reservations:\n";
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (reservations[i].getClass() == "Business") {
            reservations[i].displayReservation();
            found = true;
        }
    }

    if (!found) {
        cout << "No Business class reservations found.\n";
    }

    delete[] reservations;

    return 0;
}
