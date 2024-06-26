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

    // Order O(n)
    void InsertAtIndex(int index, int data)
    {
        if (index > sz)
        {
            return;
        }

        if (index == 0)
        {
            InsertAtHead(data);
            return;
        }
        Node *a = head;
        int current_index = 0;
        while (current_index != index-1)
        {
            a = a-> next;
            current_index++;
        }
        // a = current_index - 1
        Node * newnode = CreateNewNode(data);
        newnode -> next = a -> next;
        newnode -> prev = a;
        Node *b = a -> next;
        b-> prev = newnode;
        a-> next = newnode;
        sz++;
    }

    void Delete(int index)
    {
        if (index >= sz)
        {
            cout <<"Index "<< index <<" doesn't exist!";
            return;
        }

        Node * a = head;
        int current_index = 0;
        while (current_index != index)
        {
            a = a -> next;
            current_index++;
        }
        Node *b = a->prev;
        Node * c = a-> next;
        if(b != NULL)
        {
            b -> next = c;
        }
        if(c != NULL)
        {
            c -> prev = b;
        }
        delete a;
        if (index == 0)
        {
            head = c;
        }
        sz--;
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

    void Reverse()
    {
        if (head == NULL)
        {
            return;
        }

        Node *a = head;
        int current_index = 0;
        while (current_index != sz-1)
        {
            a = a-> next;
            current_index++;
        }
        // last index is in a
        Node * b = head;
        while (b != NULL)
        {
            swap(b->next, b-> prev);
            b = b -> prev;
        }
        head = a;
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(5);
    dl.InsertAtHead(1);

    dl.Traverse();

    dl.InsertAtIndex(2, 300);

    //dl.Traverse();

    // dl.Delete(2);
    // dl.Delete(1);
    dl.Traverse();

    dl.Reverse();

    dl.Traverse();

    //cout << dl.getSize()<< "\n";

    return 0;
}
