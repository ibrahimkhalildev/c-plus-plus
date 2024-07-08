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
        return sz;
    }

    void deleteZero()
    {
        while (head != NULL && head->data == 0)
        {
            node *temp = head;
            head = head->nxt;
            delete temp;
            sz--;
        }
        node *current = head;
        while (current != NULL && current->nxt != NULL)
        {
            if (current->nxt->data == 0)
            {
                node *temp = current->nxt;
                current->nxt = current->nxt->nxt;
                delete temp;
                sz--;
            }
            else
            {
                current = current->nxt;
            }
        }
    }
};

int main()
{
    LinkedList l;

    l.InsertAtHead(5);
    l.InsertAtHead(0);
    l.InsertAtHead(0);
    l.InsertAtHead(2);
    l.InsertAtHead(0);

    l.Traverse();

    l.deleteZero();
    l.Traverse();

    return 0;
}
