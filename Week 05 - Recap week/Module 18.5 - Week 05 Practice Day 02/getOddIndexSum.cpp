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

    // Returns the sum of all odd indexed nodes
    int getOddIndexSum()
    {
        int sum = 0;
        node *current = head;
        int index = 0;
        while (current != NULL)
        {
            if (index % 2 != 0)
            {
                sum +=current -> data;
            }
            current = current -> nxt;
            index++;
        }
        return sum;
    }
};

int main()
{
    LinkedList l;

    l.InsertAtHead(5);
    l.InsertAtHead(4);
    l.InsertAtHead(6);
    l.InsertAtHead(6);
    l.InsertAtHead(2);
    l.InsertAtHead(3);

    l.Traverse();

    cout << "Sum of Odd Indexed nodes: " << l.getOddIndexSum() << endl;

    return 0;
}
