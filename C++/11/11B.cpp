/*Write a C++ program to create a class Person that contains data members as Person_Name, City, Mob_No. Write a C++ program to perform following functions:
a. To accept and display Person information
b. To search the Person details of a given mobile number
c. To search the Person details of a given city.
(Use Function Overloading)*/

#include <iostream>
using namespace std;

class Person {
    string name, city;
    long mob;

public:
    void accept() {
        cout << "Enter name, city, mobile: ";
        cin >> name >> city >> mob;
    }

    void display() {
        cout << name << " " << city << " " << mob << endl;
    }

    bool search(long m) { return mob == m; }
    bool search(string c) { return city == c; }
};

int main() {
    Person p[3];
    
    for (int i = 0; i < 3; i++) 
        p[i].accept();

    long mobSearch;
    cout << "Enter mobile to search: ";
    cin >> mobSearch;

    for (int i = 0; i < 3; i++)
        if (p[i].search(mobSearch))
            p[i].display();

    string citySearch;
    cout << "Enter city to search: ";
    cin >> citySearch;

    for (int i = 0; i < 3; i++)
        if (p[i].search(citySearch))
            p[i].display();

    return 0;
}
