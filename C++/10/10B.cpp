/*Design a base class Product(Product _Id, Product _Name, Price). 
Derive a class Discount (Discount_In_Percentage) from Product. A customer buys n Products.
 Calculate total price, total discount and display bill using appropriate manipulators.*/

 #include <iostream>
#include <iomanip>
using namespace std;

class Product {
protected:
    int id;
    string name;
    float price;

public:
    void accept() {
        cout << "Enter ID, Name, Price: ";
        cin >> id >> name >> price;
    }
};

class Discount : public Product {
    float disc;

public:
    void accept() {
        Product::accept();
        cout << "Enter Discount %: ";
        cin >> disc;
    }

    float getDisc() { return (price * disc) / 100; }
    float getFinal() { return price - getDisc(); }

    void display() {
        cout << setw(5) << id << setw(10) << name << setw(10) << price
             << setw(10) << getDisc() << setw(10) << getFinal() << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    Discount d[n];
    float totalPrice = 0, totalDisc = 0, totalFinal = 0;

    for (int i = 0; i < n; i++) {
        d[i].accept();
        totalPrice += d[i].price;
        totalDisc += d[i].getDisc();
        totalFinal += d[i].getFinal();
    }

    cout << setw(5) << "ID" << setw(10) << "Name" << setw(10) << "Price"
         << setw(10) << "Discount" << setw(10) << "Final" << endl;

    for (int i = 0; i < n; i++) d[i].display();

    cout << "\nTotal Price: " << totalPrice
         << "\nTotal Discount: " << totalDisc
         << "\nFinal Price: " << totalFinal << endl;

    return 0;
}
