/*Write a C++ program to sort integer and float array elements in ascending order by using function overloading*/

#include <iostream>
#include <algorithm>  
using namespace std;

void sortInt(int a[], int n) {
    sort(a, a + n);   
    cout << "Sorted Integers: ";
    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";
    cout << endl;
}

void sortFloat(float a[], int n) {
    sort(a, a + n);  
    cout << "Sorted Floats: ";
    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[] = {5, 2, 8, 1};
    float b[] = {3.4, 1.2, 5.5};

    int intSize = sizeof(a) / sizeof(a[0]);
    int floatSize = sizeof(b) / sizeof(b[0]);

    sortInt(a, intSize);
    sortFloat(b, floatSize);

    return 0;
}
