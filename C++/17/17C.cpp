/*Create a base class Media. Derive two different classes Book (Book_id, Book_name, Publication, Author, Book_price) 
and CD (CD_title, CD_price) from Media. 
Write a program to accept and display information of both Book and CD. (Use pure virtual function)*/

#include <iostream>
#include <string>
using namespace std;

class Media {
public:
    virtual void accept() = 0;    
    virtual void display() = 0;   
};

class Book : public Media {
    int id;
    string name, pub, author;
    float price;
public:
    void accept() {
        cout << "\nEnter Book ID, Name, Publication, Author, Price: ";
        cin >> id >> name >> pub >> author >> price;
    }
    void display() {
        cout << "\nBook Details:";
        cout << "\nID: " << id 
             << "\nName: " << name 
             << "\nPublication: " << pub 
             << "\nAuthor: " << author 
             << "\nPrice: " << price << endl;
    }
};

class CD : public Media {
    string title;
    float price;
public:
    void accept() {
        cout << "\nEnter CD Title and Price: ";
        cin >> title >> price;
    }
    void display() {
        cout << "\nCD Details:";
        cout << "\nTitle: " << title 
             << "\nPrice: " << price << endl;
    }
};

int main() {
    int bCount, cCount;

    cout << "Enter number of Books: ";
    cin >> bCount;

    cout << "Enter number of CDs: ";
    cin >> cCount;

    Book books[bCount];
    CD cds[cCount];

    cout << "\nEnter Book Information:";
    for (int i = 0; i < bCount; ++i) {
        cout << "\nBook " << i + 1 << ":";
        books[i].accept();
    }

    cout << "\nEnter CD Information:";
    for (int i = 0; i < cCount; ++i) {
        cout << "\nCD " << i + 1 << ":";
        cds[i].accept();
    }

    cout << "\nDisplaying Book Information:";
    for (int i = 0; i < bCount; ++i) {
        cout << "\nBook " << i + 1 << ":";
        books[i].display();
    }

    cout << "\nDisplaying CD Information:";
    for (int i = 0; i < cCount; ++i) {
        cout << "\nCD " << i + 1 << ":";
        cds[i].display();
    }

    return 0;
}
