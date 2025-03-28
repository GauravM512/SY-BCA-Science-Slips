/*Write a C++ program to read the contents of a “Sample.txt” file. Store all the uppercase characters in ”Upper.txt”, 
lowercase characters in ”Lower.txt” and digits in “Digit.txt” files. 
Change the case of each character from “Sample.txt” and store it in “Convert.txt” file.*/

#include <iostream>
#include <fstream>
#include <cctype>  // For character functions
using namespace std;

void processFile() {
    ifstream fin("Sample.txt");  
    if (!fin) {
        cerr << "Error: Could not open Sample.txt!" << endl;
        return;
    }

    ofstream foutUpper("Upper.txt");    
    ofstream foutLower("Lower.txt");    
    ofstream foutDigit("Digit.txt");    
    ofstream foutConvert("Convert.txt"); 

    if (!foutUpper || !foutLower || !foutDigit || !foutConvert) {
        cerr << "Error: Could not create output files!" << endl;
        return;
    }

    char ch;
    while (fin.get(ch)) {  // Read each character
        if (isupper(ch))
            foutUpper << ch;
        else if (islower(ch))
            foutLower << ch;
        else if (isdigit(ch))
            foutDigit << ch;

        // Convert case: Upper to Lower, Lower to Upper
        if (isupper(ch))
            foutConvert << char(tolower(ch));
        else if (islower(ch))
            foutConvert << char(toupper(ch));
        else
            foutConvert << ch; // Keep digits and special characters unchanged
    }

    // Close all files
    fin.close();
    foutUpper.close();
    foutLower.close();
    foutDigit.close();
    foutConvert.close();

    cout << "Processing complete! Check the output files." << endl;
}

int main() {
    processFile();
    return 0;
}
