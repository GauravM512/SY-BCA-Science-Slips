/*Create a class String which contains a character pointer (Use new and delete operator). 
Write a C++ program to overload following operators:
a. < To compare length of two strings
b. == To check equality of two strings
c. + To concatenate two strings*/

#include <iostream>
#include <string>
using namespace std;

class String {
    string str;
public:
    void accept() {
        cout << "Enter string: ";
        cin >> str;
    }

    void display() {
        cout << str << endl;
    }

    bool operator<(const String &s) {
        return str.length() < s.str.length();
    }

    bool operator==(const String &s) {
        return str == s.str;
    }

    String operator+(const String &s) {
        String temp;
        temp.str = str + s.str;
        return temp;
    }
};

int main() {
    String str1, str2, concat;

    cout << "String 1:\n";
    str1.accept();
    cout << "String 2:\n";
    str2.accept();

    cout << "\nString 1: "; str1.display();
    cout << "String 2: "; str2.display();

    cout << "\nComparing lengths: ";
    cout << (str1 < str2 ? "String 1 is shorter" : "String 2 is shorter or equal") << endl;

    cout << "Equality check: " << (str1 == str2 ? "Equal" : "Not Equal") << endl;

    concat = str1 + str2;
    cout << "Concatenated String: "; concat.display();

    return 0;
}
