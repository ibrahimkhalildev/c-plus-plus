#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node *prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    // Creates a new node with the given data and returns it O(1)
    node *CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    // Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }
    // Prints the linked list O(n)
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

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }

    void deleteMid()
    {
        if (sz == 0)
            return;

        int midIdx = sz / 2;
        node *a = head;

        for (int i = 0; i < midIdx; i++)
        {
            a = a->nxt;
        }
        if (a->prv != NULL)
        {
            a->prv->nxt = a->nxt;
        }
        if (a->nxt != NULL)
        {
            a->nxt->prv = a->prv;
        }
        if (a == head)
        {
            head = a->nxt;
        }
        delete a;
        sz--;
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(5);
    dl.InsertAtHead(4);
    dl.InsertAtHead(3);
    dl.InsertAtHead(2);
    dl.InsertAtHead(1);

    dl.Traverse(); // Output: 1 2 3 4 5

    dl.deleteMid();

    dl.Traverse(); // Output: 1 2 4 5

    return 0;
}
