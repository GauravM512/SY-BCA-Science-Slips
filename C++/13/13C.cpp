/*Write a C++ program to read the contents of a text file. 
Count and display number of characters, words and lines from a file. 
Find the number of occurrences of a given word present in a file*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string filename, searchWord, line, word;
    int charCount = 0, wordCount = 0, lineCount = 0, occurrenceCount = 0;

    cout << "Enter the file name: ";
    cin >> filename;

    ifstream file(filename);

    if (!file) {
        cout << "Error: Unable to open the file!" << endl;
        return 1;
    }

    cout << "Enter the word to search for: ";
    cin >> searchWord;

    while (getline(file, line)) {
        lineCount++;
        charCount += line.length(); 

        istringstream iss(line);
        while (iss >> word) {
            wordCount++;
            if (word == searchWord) {
                occurrenceCount++;
            }
        }
        charCount++;  // For newline character
    }

    file.close();

    cout << "\nFile Statistics:" << endl;
    cout << "Characters: " << charCount << endl;
    cout << "Words: " << wordCount << endl;
    cout << "Lines: " << lineCount << endl;
    cout << "Occurrences of '" << searchWord << "': " << occurrenceCount << endl;

    return 0;
}
