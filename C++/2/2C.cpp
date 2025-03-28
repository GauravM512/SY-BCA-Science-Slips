/*Write a C++ program to copy the contents of one file to another*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string sourceFile, destinationFile;

    cout << "Enter source file name: ";
    cin >> sourceFile;
    cout << "Enter destination file name: ";
    cin >> destinationFile;

    ifstream source(sourceFile, ios::binary);
    ofstream destination(destinationFile, ios::binary);

    if (!source) {
        cout << "Error opening source file." << endl;
        return 1;
    }

    if (!destination) {
        cout << "Error creating destination file." << endl;
        return 1;
    }

    char ch;
    while (source.get(ch)) {
        destination.put(ch);
    }

    cout << "File copied successfully." << endl;

    source.close();
    destination.close();

    return 0;
}
