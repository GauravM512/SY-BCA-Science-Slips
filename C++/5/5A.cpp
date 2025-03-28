/*Write a C++ program to create a class Mobile which contains data members as Mobile_Id, Mobile_Name, Mobile_Price. 
Create and Initialize all values of Mobile object by using parameterized constructor. Display the values of Mobile object.*/

#include <iostream>
using namespace std;

class Mobile {
    int Mobile_Id;
    string Mobile_Name;
    float Mobile_Price;

public:
    Mobile(int id, string name, float price) {
        Mobile_Id = id;
        Mobile_Name = name;
        Mobile_Price = price;
    }

    void display() {
        cout << "ID: " << Mobile_Id 
             << ", Name: " << Mobile_Name 
             << ", Price: " << Mobile_Price << endl;
    }
};

int main() {
    Mobile m(101, "Samsung", 15999);
    m.display();
    return 0;
}
