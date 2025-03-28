/*Create a class String which contains a character pointer (Use new and delete operator)
Write a C++ program to overload following operators
a. ! To reverse the case of each alphabet from given string.
b. [ ] To print a character present at specified index*/

#include <iostream>
#include <cctype>   
#include <cstring>  
using namespace std;

class String {
private:
    char* str;
    int length;

public:
    String(const char* s = "") {
        length = strlen(s);
        str = new char[length + 1];   
        strcpy(str, s);               
    }

    ~String() {
        delete[] str;   
    }

    void operator!() {
        for (int i = 0; i < length; ++i) {
            if (isupper(str[i]))
                str[i] = tolower(str[i]);
            else if (islower(str[i]))
                str[i] = toupper(str[i]);
        }
    }

    char operator[](int index) {
        if (index >= 0 && index < length) {
            return str[index];
        } else {
            cout << "Index out of range!" << endl;
            return '\0';  
        }
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    String s("Hello World");

    cout << "Original String: ";
    s.display();

    !s;  
    cout << "After reversing case: ";
    s.display();

    cout << "Character at index 0: " << s[0] << endl;
    cout << "Character at index 6: " << s[6] << endl;

    cout << "Character at index 15: " << s[15] << endl;

    return 0;
}
