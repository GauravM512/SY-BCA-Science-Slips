/*Write a C++ program to overload function Volume and find Volume of Cube, Cylinder and Sphere.*/

#include <iostream>
using namespace std;

float volume(float side) { 
    return side * side * side;  // Cube
}

float volume(float radius, float height) { 
    return 3.14f * radius * radius * height;  // Cylinder
}

double volume(double radius) { 
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;  // Sphere
}

int main() {
    cout << "Volume of Cube (side=3): " << volume(3.0f) << endl;
    cout << "Volume of Cylinder (r=2, h=5): " << volume(2.0f, 5.0f) << endl;
    cout << "Volume of Sphere (r=2): " << volume(2.0) << endl;
    return 0;
}
