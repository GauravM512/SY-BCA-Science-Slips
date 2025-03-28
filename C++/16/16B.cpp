/*Create two base classes Learn_Info(Roll_No, Stud_Name, Class, Percentage) and Earn_Info(No_of_hours_worked, Charges_per_hour). 
Derive a class Earn_Learn_info from above two classes. Write necessary member functions to accept and display Student information.
 Calculate total money earned by the student. (Use constructor in derived class)*/

 #include <iostream>
#include <string>
using namespace std;

class Learn_Info {
protected:
    int rno;               
    string name, cls;      
    float perct;           

public:
    Learn_Info() : rno(0), name(""), cls(""), perct(0.0) {}

    void acceptLearnInfo() {
        cout << "\n--- Enter Student Details ---\n";
        cout << "Roll No: ";
        cin >> rno;
        cout << "Name: ";
        cin >> name;
        cout << "Class: ";
        cin >> cls;
        cout << "Percentage: ";
        cin >> perct;
    }

    void displayLearnInfo() {
        cout << "\n--- Student Information ---\n";
        cout << "Roll No: " << rno << "\nName: " << name 
             << "\nClass: " << cls << "\nPercentage: " << perct << "%" << endl;
    }
};

class Earn_Info {
protected:
    int hrs;                // Hours worked
    float rate;              // Charges per hour

public:
    Earn_Info() : hrs(0), rate(0.0) {}

    void acceptEarnInfo() {
        cout << "\n--- Enter Earning Details ---\n";
        cout << "Hours Worked: ";
        cin >> hrs;
        cout << "Charges per Hour: ";
        cin >> rate;
    }

    void displayEarnInfo() {
        cout << "\n--- Earning Information ---\n";
        cout << "Hours Worked: " << hrs 
             << "\nCharges per Hour: ₹" << rate << endl;
    }
};

class Earn_Learn_info : public Learn_Info, public Earn_Info {
public:
    Earn_Learn_info() : Learn_Info(), Earn_Info() {}

    void accept() {
        acceptLearnInfo();
        acceptEarnInfo();
    }

    void display() {
        displayLearnInfo();
        displayEarnInfo();
        float totalEarned = hrs * rate;
        cout << "\n Total Money Earned: ₹" << totalEarned << endl;
    }
};

int main() {
    Earn_Learn_info s;

    cout << "\n Enter Student and Earning Information:";
    s.accept();

    cout << "\n Displaying All Information:";
    s.display();

    return 0;
}
