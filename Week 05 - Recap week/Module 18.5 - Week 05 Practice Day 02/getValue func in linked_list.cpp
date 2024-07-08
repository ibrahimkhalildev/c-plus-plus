#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *nxt;
};

class LinkedList
{
public:
    node *head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
    }

    // Creates a new node with data = value and nxt= NULL
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    // Insert new value at Head
    void InsertAtHead(int value)
    {
        sz++;
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        // If head is not NULL
        a->nxt = head;
        head = a;
    }

    // Prints the linked list
    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }

    // Returns number of elements in the linked list
    int getSize()
    {
        // O(1)
        return sz;
    }

    int getValue(int index)
    {
        if (index >= sz)
        {
            return -1;
        }
        node *a = head;
        for (int i = 0; i < index; i++)
        {
            a = a->nxt;
        }
        return a->data;
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(5);
    l.InsertAtHead(4);
    l.InsertAtHead(6);
    l.InsertAtHead(2);
    l.InsertAtHead(3);
    l.Traverse();

    cout << l.getValue(1) << endl;
    cout << l.getValue(90) << endl;
    return 0;
}
