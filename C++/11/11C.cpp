/*Create a base class Conversion. Derive three different classes Weight (Gram, Kilogram), 
Volume (Milliliter, Liter), Currency (Rupees, Paise) from Conversion class.
 Write a program to perform read, convert and display operations. (Use Pure virtual function)*/

#include <iostream>
#include <iomanip>
using namespace std;

class Conversion {
public:
    virtual void read() = 0;
    virtual void convert() = 0;
    virtual void display() = 0;
    virtual ~Conversion() {}
};

class Weight : public Conversion {
    float gram, kg;
public:
    void read() {
        cout << "Enter weight in grams: ";
        cin >> gram;
    }

    void convert() {
        kg = gram / 1000;
    }

    void display() {
        cout << fixed << setprecision(2);
        cout << gram << " grams = " << kg << " kilograms" << endl;
    }
};

class Volume : public Conversion {
    float ml, liter;
public:
    void read() {
        cout << "Enter volume in milliliters: ";
        cin >> ml;
    }

    void convert() {
        liter = ml / 1000;
    }

    void display() {
        cout << fixed << setprecision(2);
        cout << ml << " mL = " << liter << " liters" << endl;
    }
};

class Currency : public Conversion {
    int rupees, paise;
public:
    void read() {
        cout << "Enter amount in rupees: ";
        cin >> rupees;
    }

    void convert() {
        paise = rupees * 100;
    }

    void display() {
        cout << rupees << " rupees = " << paise << " paise" << endl;
    }
};

int main() {
    Weight w;
    Volume v;
    Currency c;

    cout << "\n--- Weight Conversion ---\n";
    w.read();
    w.convert();
    w.display();

    cout << "\n--- Volume Conversion ---\n";
    v.read();
    v.convert();
    v.display();

    cout << "\n--- Currency Conversion ---\n";
    c.read();
    c.convert();
    c.display();

    return 0;
}
