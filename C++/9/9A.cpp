/*Write a C++ program to create a class Item with data members Item_code, Item_name, Item_Price. 
Write member functions to accept and display item information and also display number of objects created for a class. 
(Use Static data member and Static member function)*/

#include <iostream>
using namespace std;

class Item {
    static int count;
    int code;
    string name;
    float price;

public:
    void getData() {
        cout << "Enter Item code, name, and price: ";
        cin >> code >> name >> price;
        count++;
    }

    void showData() const {
        cout << "Code: " << code << ", Name: " << name << ", Price: " << price << endl;
    }

    static void showCount() {
        cout << "Total objects: " << count << endl;
    }
};

int Item::count = 0;

int main() {
    Item a, b;

    a.getData();
    b.getData();

    a.showData();
    b.showData();

    Item::showCount();

    return 0;
}
