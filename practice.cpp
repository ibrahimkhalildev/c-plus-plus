#include <iostream>
using namespace std;

template<class T>
class node {
public:
    T data;
    node* next;
    node(T val) : data(val), next(nullptr) {}
};

template<class T>
class Stack {
private:
    node<T>* topNode;
    int size;

public:
    Stack() : topNode(nullptr), size(0) {}

    void push(T val) {
        node<T>* newNode = new node<T>(val);
        newNode->next = topNode;
        topNode = newNode;
        size++;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            return;
        }
        node<T>* temp = topNode;
        topNode = topNode->next;
        delete temp;
        size--;
    }

    T top() {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            T a;
            return a; // Assuming T is a type that can have a default value
        }
        return topNode->data;
    }

    bool isEmpty() {
        return size == 0;
    }

    int getSize() {
        return size;
    }
};

template<class T>
void printStack(Stack<T>& stack) {
    Stack<T> tempStack; // Temporary stack for printing

    // Copy elements from stack to tempStack
    Stack<T> originalStack = stack; // Make a copy of the original stack
    while (!originalStack.isEmpty()) {
        tempStack.push(originalStack.top());
        originalStack.pop();
    }

    // Print elements in original insertion order
    cout << "Original stack: ";
    while (!tempStack.isEmpty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;
}

int main() {
    Stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);

    // Print the original stack in original order
    printStack(a);

    return 0;
}
