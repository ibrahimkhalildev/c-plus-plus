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

    int getMax()
    {
        if (sz == 0)
            return -1;

        int maxVal = head->data;
        node *a = head->nxt;

        while (a != NULL)
        {
            if (a->data > maxVal)
            {
                maxVal = a->data;
            }
            a = a->nxt;
        }
        return maxVal;
    }

    void deleteMax()
    {
        if (sz == 0)
            return;

        int maxVal = getMax();
        node *a = head;

        while (a != NULL)
        {
            if (a->data == maxVal)
            {
                node *temp = a;

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

                a = a->nxt;
                delete temp;
                sz--;
            }
            else
            {
                a = a-> nxt;
            }
        }
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(6);
    dl.InsertAtHead(5);
    dl.InsertAtHead(4);
    dl.InsertAtHead(6);
    dl.InsertAtHead(2);
    dl.InsertAtHead(3);

    dl.Traverse(); // Output: 3 2 6 4 5 6

    dl.deleteMax();

    dl.Traverse(); // Output: 3 2 4 5

    return 0;
}
