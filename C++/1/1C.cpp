/*Write a C++ program to create a class Shape with functions to find area of the shape 
and display the name of the shape and other essential components of the class. 
Create derived classes circle, rectangle and trapezoid each having overridden function area and display.
Write a suitable program to illustrate Virtual Function.*/

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void display() {
        cout << "This is a generic shape." << endl;
    }

    virtual double area() = 0;  // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    void display() {
        cout << "This is a Circle." << endl;
    }

    double area() {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
    void display() {
        cout << "This is a Rectangle." << endl;
    }

    double area() {
        return length * width;
    }
};

class Trapezoid : public Shape {
private:
    double base1, base2, height;
public:
    Trapezoid(double b1, double b2, double h) : base1(b1), base2(b2), height(h) {}

    void display() {
        cout << "This is a Trapezoid." << endl;
    }

    double area() {
        return 0.5 * (base1 + base2) * height;
    }
};

int main() {
    Shape *shape;  // Base class pointer

    Circle circle(5);
    Rectangle rectangle(4, 6);
    Trapezoid trapezoid(4, 6, 5);

    shape = &circle;
    shape->display();
    cout << "Area: " << shape->area() << endl << endl;

    shape = &rectangle;
    shape->display();
    cout << "Area: " << shape->area() << endl << endl;

    shape = &trapezoid;
    shape->display();
    cout << "Area: " << shape->area() << endl << endl;

    return 0;
}
