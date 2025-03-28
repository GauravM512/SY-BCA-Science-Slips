/*Create a class Time containing members as:
- hours
- minutes
- seconds
Write a C++ program for overloading operators >> and << to accept and display a Time
also write a member function to display time in total seconds.*/

#include <iostream>
using namespace std;

class Time {
    int hrs, mins, secs;   

public:
    Time() : hrs(0), mins(0), secs(0) {}

    // Overloading >> operator for input
    friend istream& operator>>(istream& in, Time& t) {
        cout << "\nEnter Hours: ";
        in >> t.hrs;
        cout << "Enter Minutes: ";
        in >> t.mins;
        cout << "Enter Seconds: ";
        in >> t.secs;
        return in;
    }

    // Overloading << operator for output
    friend ostream& operator<<(ostream& out, const Time& t) {
        out << t.hrs << " hrs : " << t.mins << " mins : " << t.secs << " secs";
        return out;
    }

    // Member function to display total seconds
    void displayTotalSeconds() const {
        int total = (hrs * 3600) + (mins * 60) + secs;
        cout << "\nTotal Time in Seconds: " << total << " seconds" << endl;
    }
};

int main() {
    Time t;

    cout << "\nEnter Time Information:";
    cin >> t;

    cout << "\nDisplaying Time:";
    cout << t;

    t.displayTotalSeconds();

    return 0;
}
