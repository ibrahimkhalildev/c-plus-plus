#include <bits/stdc++.h>

using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node *next;
};

template <class T>
class SinglyLinkedList
{
public:
    Node<T> *head;
    int sz;

    SinglyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    // Creates a new node with the given data and returns it O(1)
    Node<T>* CreateNewNode(T data)
    {
        Node<T> *new_Node = new Node<T>;
        new_Node->data = data;
        new_Node->next = NULL;
        return new_Node;
    }


    void InsertAtHead(T data)
    {
        sz++;
        Node<T> *new_Node = CreateNewNode(data);
        if (head == NULL)
        {
            head = new_Node;
            return;
        }
        new_Node->next = head;
        head = new_Node;
    }
    // Deletes the head node O(1)
    void DeleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        sz--;
    }
    // Returns the size of the linked list O(1)
    int getSize()
    {
        return sz;
    }
};

template <class T>
class Stack
{
public:
    SinglyLinkedList<T> sl;
    Stack()
    {
    }

    // Returns the top element of the stack O(1)
    T top()
    {
        if (sl.getSize() == 0)
        {
            cout << "Stack is empty!" << endl;
            return T();
        }
        return sl.head->data;
    }
    // Pushes an element onto the stack O(1)
    void push(T val)
    {
        sl.InsertAtHead(val);
    }
    // Pops the top element from the stack O(1)
    void pop()
    {
        if (sl.getSize() == 0)
        {
            cout << "Stack is empty!" << endl;
            return;
        }
        sl.DeleteAtHead();
    }
};

int main()
{
    Stack<int> st;
    st.push(3);
    cout << st.top() << "\n";
    st.push(4);
    cout << st.top() << "\n";
    st.push(5);
    cout << st.top() << "\n";
    cout << endl;

    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";


    return 0;
}
