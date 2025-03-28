/*Create a class called LIST with two pure virtual function store() and retrieve(). 
To store a value call store and to retrieve call retrieves function.
 Derive two classes stack and queue from it and override store and retrieve.*/

 #include <iostream>
using namespace std;

class LIST {
public:
    virtual void store(int value) = 0;    
    virtual void retrieve() = 0;         
};

// Derived Stack class
class Stack : public LIST {
    static const int SIZE = 5;
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    // Overriding store function for Stack (LIFO)
    void store(int value) override {
        if (top >= SIZE - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = value;
            cout << value << " stored in stack." << endl;
        }
    }

    // Overriding retrieve function for Stack
    void retrieve() override {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << "Retrieved from stack: " << arr[top--] << endl;
        }
    }
};

// Derived Queue class
class Queue : public LIST {
    static const int SIZE = 5;
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Overriding store function for Queue (FIFO)
    void store(int value) override {
        if (rear >= SIZE - 1) {
            cout << "Queue Overflow!" << endl;
        } else {
            if (front == -1) front = 0;
            arr[++rear] = value;
            cout << value << " stored in queue." << endl;
        }
    }

    // Overriding retrieve function for Queue
    void retrieve() override {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
        } else {
            cout << "Retrieved from queue: " << arr[front++] << endl;
            if (front > rear) {
                front = rear = -1;  // Reset queue when empty
            }
        }
    }
};

int main() {
    Stack stack;
    Queue queue;

    cout << "\n*** Stack Operations ***" << endl;
    stack.store(10);
    stack.store(20);
    stack.store(30);
    stack.retrieve();
    stack.retrieve();
    stack.retrieve();
    stack.retrieve();  // Underflow condition

    cout << "\n*** Queue Operations ***" << endl;
    queue.store(100);
    queue.store(200);
    queue.store(300);
    queue.retrieve();
    queue.retrieve();
    queue.retrieve();
    queue.retrieve();  // Underflow condition

    return 0;
}
