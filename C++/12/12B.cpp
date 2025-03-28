/*Write a C++ program to create a class which contains single dimensional integer array of given size. 
Define member function to display median of a given array. 
(Use Dynamic Constructor to allocate and Destructor to free memory of an object).*/

#include <iostream>
#include <algorithm>
using namespace std;

class Array {
    int *arr;   // Pointer for dynamic memory allocation
    int size;

public:
    // Dynamic Constructor
    Array(int s) {
        size = s;
        arr = new int[size];  // Allocate memory dynamically
    }

    void accept() {
        cout << "Enter elements: ";
        for (int i = 0; i < size; i++) 
            cin >> arr[i];
    }

    void median() {
        sort(arr, arr + size);
        if (size % 2 == 0)
            cout << "Median: " << (arr[size / 2 - 1] + arr[size / 2]) / 2.0 << endl;
        else
            cout << "Median: " << arr[size / 2] << endl;
    }

    // Destructor to free memory
    ~Array() {
        delete[] arr;  
    }
};

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size! Size must be greater than 0." << endl;
        return 1;
    }

    Array a(n);
    a.accept();
    a.median();

    return 0;
}
