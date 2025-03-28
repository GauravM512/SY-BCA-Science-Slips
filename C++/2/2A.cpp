/*Write a C++ program to create two classes Rectangle1 and Rectangle2. 
Compare area of both the rectangles using friend function*/

#include <iostream> 
using namespace std;

class Rectangle2;  

class Rectangle1 {
    float length, breadth;

public:
    void getData() {
        cout << "Enter length and breadth of Rectangle 1: ";
        cin >> length >> breadth;
    }

    float area() {
        return length * breadth;
    }

    friend void compareArea(Rectangle1 r1, Rectangle2 r2);
};

class Rectangle2 {
    float length, breadth;

public:
    void getData() {
        cout << "Enter length and breadth of Rectangle 2: ";
        cin >> length >> breadth;
    }

    float area() {
        return length * breadth;
    }

    friend void compareArea(Rectangle1 r1, Rectangle2 r2);
};

void compareArea(Rectangle1 r1, Rectangle2 r2) {
    float area1 = r1.area();
    float area2 = r2.area();

    if (area1 > area2)
        cout << "Rectangle 1 is larger." << endl;
    else if (area2 > area1)
        cout << "Rectangle 2 is larger." << endl;
    else
        cout << "Both rectangles have equal area." << endl;
}

int main() {
    Rectangle1 r1;
    Rectangle2 r2;

    r1.getData();
    r2.getData();

    compareArea(r1, r2);

    return 0;
}
