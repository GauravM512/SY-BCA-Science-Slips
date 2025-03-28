/*Write a C++ program to implement a class ‘student’ to overload following functions as follows:
a. int maximum(int, int) – returns the maximum score of two students
b. int maximum(int *a, int arraylength) – returns the maximum score from an array ‘a’ [10]*/

#include <iostream>
using namespace std;

class Student {
public:
    int maximum(int a, int b) {
        return (a > b) ? a : b;
    }

    int maximum(int *a, int n) {
        int max = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }
        return max;
    }

    void displayArray(int *a, int n) {
        cout << "Array elements: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Student s;

    int x = 50, y = 80;
    cout << "Maximum of " << x << " and " << y << ": " << s.maximum(x, y) << endl;

    int arr[10] = {45, 67, 12, 89, 34, 78, 56, 99, 23, 15};
    
    s.displayArray(arr, 10);
    
    cout << "Maximum in the array: " << s.maximum(arr, 10) << endl;

    return 0;
}
