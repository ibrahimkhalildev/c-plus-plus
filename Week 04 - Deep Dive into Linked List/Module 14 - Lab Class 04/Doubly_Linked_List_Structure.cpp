#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node * next;
    Node * prev;

};

class DoublyLinkedList
{
public:
    Node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    // Create a new node with the given data and returns it
    Node * CreateNewNode(int data)
    {
        Node * newnode = new Node;
        newnode -> data = data;
        newnode -> next = NULL;
        newnode -> prev = NULL;
        return newnode;
    }
    // Insert a node with given data at head
    void InsertAtHead(int data)
    {
        sz++;
        Node * newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        Node *a = head;
        newnode -> next = a;
        a -> prev= newnode;
        head = newnode;
    }

    // Prints the linked list O(n)
    void Traverse()
    {
        Node *a = head;
        while (a != NULL)
        {
            cout << a-> data << " ";
            a = a-> next;
        }
        cout << "\n";
    }

    int getSize()
    {
        return sz;
    }

};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(5);
    dl.InsertAtHead(1);

    dl.Traverse();
    // cout << dl.getSize()<< "\n";

    return 0;
}
