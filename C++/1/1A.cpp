/*Write the definition for a class Cylinder that contains data members radius and height. The class
has the following member functions:
a. void setradius(float) to set the radius of data member.
b. void setheight(float) to set the height of data member.
c. float volume( ) to calculate and return the volume of the cylinder.
Write a C++ program to create cylinder object and display its volume. */

#include <iostream>

using namespace std;
class Cylinder {
	float radius, height;
	public: void setRadius(float r) {
		radius = r;
	}
	void setHeight(float h) {
		height = h;
	}
	float volume() {
		return 3.14 * radius * radius * height;
	}
};
int main() {
	Cylinder c;
	float r, h;
	cout << "Enter radius and height of cylinder: ";
	cin >> r >> h;
	c.setRadius(r);
	c.setHeight(h);
	cout << "Volume of cylinder = " << c.volume() << endl;
	return 0;
}