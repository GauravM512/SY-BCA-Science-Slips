/*Create a class String which contains a character pointer (Use new and delete operator).
Write a C++ program to overload following operators:
a. ! To reverse the case of each alphabet from given string
b. == To check equality of two strings*/

#include <iostream>
#include <cstring>
using namespace std;

class String {
    char *str;
public:
    String(const char *s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    ~String() {
        delete[] str;
    }

    void accept() {
        char temp[100];
        cout << "Enter string: ";
        cin.getline(temp, 100);
        delete[] str;
        str = new char[strlen(temp) + 1];
        strcpy(str, temp);
    }

    void display() {
        cout << str << endl;
    }

    void operator!() {
        for (int i = 0; str[i]; i++) {
            if (isupper(str[i])) 
                str[i] = tolower(str[i]);
            else if (islower(str[i])) 
                str[i] = toupper(str[i]);
        }
    }

    bool operator==(const String &s) {
        return strcmp(str, s.str) == 0;
    }
};

int main() {
    String s1, s2;

    cout << "Enter first string: ";
    s1.accept();
    cout << "Enter second string: ";
    s2.accept();

    !s1;
    cout << "\nAfter reversing the case of s1: ";
    s1.display();

    cout << "\ns1 == s2: " << (s1 == s2 ? "Equal" : "Not Equal") << endl;

    return 0;
}
