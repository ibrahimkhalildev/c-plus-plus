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
    // Deletes all nodes with data = 0 O(n)
    void deleteZero()
    {
        node *current = head;
        while (current != NULL)
        {
            if (current->data == 0)
            {
                node *temp = current;
                if (current->prv != NULL)
                {
                    current->prv->nxt = current->nxt;
                }
                if (current->nxt != NULL)
                {
                    current->nxt->prv = current->prv;
                }
                if (current == head)
                {
                    head = current->nxt;
                }
                current = current->nxt;
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
    DoublyLinkedList dl;
    dl.InsertAtHead(5);
    dl.InsertAtHead(0);
    dl.InsertAtHead(0);
    dl.InsertAtHead(2);
    dl.InsertAtHead(0);

    dl.Traverse();

    dl.deleteZero();
    dl.Traverse();
    return 0;
}
