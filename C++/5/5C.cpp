/*Create a class Book containing Book_name, author and Price as a data member and 
write necessary member functions for the following (use function overloading).
a. To Accept and display the Book Information.
b. Display book details of a given author
c. Display book details of specific price*/

#include <iostream>
#include <string>
using namespace std;

class Book {
    string Book_name;
    string Author;
    float Price;

public:
    void accept() {
        cout << "Enter Book Name: ";
        cin >> ws;  
        getline(cin, Book_name);

        cout << "Enter Author Name: ";
        getline(cin, Author);

        cout << "Enter Price: ";
        cin >> Price;
    }

    void display() {
        cout << "\nBook Name: " << Book_name << "\nAuthor: " << Author << "\nPrice: " << Price << endl;
    }

    void display(const string& searchAuthor) {
        if (Author == searchAuthor) {
            display();
        }
    }

    void display(float searchPrice) {
        if (Price == searchPrice) {
            display();
        }
    }

    string getAuthor() {
        return Author;
    }

    float getPrice() {
        return Price;
    }
};

int main() {
    int n, choice;
    cout << "Enter the number of books: ";
    cin >> n;

    Book* books = new Book[n];

    do {
        cout << "\nMENU:\n";
        cout << "1. Accept Book Information\n";
        cout << "2. Display All Books\n";
        cout << "3. Display Books by Author\n";
        cout << "4. Display Books by Price\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < n; i++) {
                    cout << "\nEnter details for Book " << i + 1 << ":\n";
                    books[i].accept();
                }
                break;

            case 2:
                cout << "\nDisplaying All Books:\n";
                for (int i = 0; i < n; i++) {
                    books[i].display();
                }
                break;

            case 3: {
                cout << "\nEnter Author Name to search: ";
                cin >> ws;  
                string author;
                getline(cin, author);
                cout << "\nBooks by " << author << ":\n";
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (books[i].getAuthor() == author) {
                        books[i].display();
                        found = true;
                    }
                }
                if (!found) {
                    cout << "No books found by this author.\n";
                }
                break;
            }

            case 4: {
                cout << "\nEnter Price to search: ";
                float price;
                cin >> price;
                cout << "\nBooks with price " << price << ":\n";
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (books[i].getPrice() == price) {
                        books[i].display();
                        found = true;
                    }
                }
                if (!found) {
                    cout << "No books found at this price.\n";
                }
                break;
            }

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    delete[] books;
    return 0;
}
