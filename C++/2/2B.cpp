/*A book (ISBN) and CD (data capacity) are both types of media (id, title) objects. 
A person buys 10 media items each of which can be either book or CD. Display the list of all books and CD’s bought. 
Define the classes and appropriate member functions to accept and display data. 
Use pointers and concept of polymorphism (Virtual Function)*/

#include <iostream>
using namespace std;

class Media {
protected:
    int id;
    string title;

public:
    virtual void accept() = 0;
    virtual void display() = 0;
    virtual ~Media() {}
};

class Book : public Media {
    string ISBN;

public:
    void accept() {
        cout << "Enter Book ID, Title, ISBN: ";
        cin >> id >> title >> ISBN;
    }

    void display() {
        cout << "Book - ID: " << id << ", Title: " << title << ", ISBN: " << ISBN << endl;
    }
};

class CD : public Media {
    float capacity;

public:
    void accept() {
        cout << "Enter CD ID, Title, Capacity (MB): ";
        cin >> id >> title >> capacity;
    }

    void display() {
        cout << "CD - ID: " << id << ", Title: " << title << ", Capacity: " << capacity << " MB" << endl;
    }
};

int main() {
    Media* items[10];

    for (int i = 0; i < 10; i++) {
        int choice;
        cout << "\nEnter 1 for Book, 2 for CD: ";
        cin >> choice;

        if (choice == 1)
            items[i] = new Book();
        else
            items[i] = new CD();

        items[i]->accept();
    }

    cout << "\nDisplaying all media items:\n";
    for (int i = 0; i < 10; i++) {
        items[i]->display();
        delete items[i];
    }

    return 0;
}
