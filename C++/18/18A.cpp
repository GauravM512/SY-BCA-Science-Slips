/*Write a C++ program to calculate following series:
(1) + (1+2) + (1+2+3) + (1+2+3+4) + ... +(1+2+3+4+...+n)*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += (i * (i + 1)) / 2;  
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
