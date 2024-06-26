#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* nxt;
};

class LinkedList
{
public:
    node * head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with data = value and nxt = NULL;
    node * CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode -> data = value;
        newnode-> nxt = NULL;
        return newnode;
    }
    //Insert new value at Head
    void InsertAtHead(int value)
    {
        sz++;
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        // If head is not NULL
        a-> nxt = head;
        head = a;
    }
    //Pringint the Linked List
    void Traverse()
    {
        node * a = head;
        while( a != NULL)
        {
            cout<< a->data << " ";
            a = a-> nxt;
        }
        cout<<"\n";
    }
    //Searching for a Sungle Value
    int SearchDistinctValue(int value)
    {
        node * a = head;
        int index = 0;
        while (a!= NULL)
        {
            if (a->data == value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;


    }
    //Searching all possible occurrence
    int SearchAllVallue(int value)
    {
        node * a = head;
        int index = 0;
        while (a!= NULL)
        {
            if (a->data == value)
            {
                cout<<value<<" is found at index "<<index<<"\n";
            }
            a = a->nxt;
            index++;
        }
    }

    // //O (size fo Liniked List) = Order of N - O(n)
    // int getSize()
    // {
    //     int sz = 0;
    //     node *a  = head;
    //     while (a != NULL)
    //     {
    //         sz++;
    //         a = a -> nxt;
    //     }
    //     return sz;
    // }

    // Order of 1 = O(1)
    int getSize()
    {
        return sz;
    }

    void Insert_At_any_index(int index, int value)
    {
        if (index <0 || index > sz)
        {
            return;
        }

        if(index == 0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node*a = head;
        int current_index = 0;
        while (current_index != index-1)
        {
            a = a-> nxt;
            current_index++;
        }
        node *newnode = CreateNewNode(value);
        newnode-> nxt = a-> nxt;
        a -> nxt = newnode;
    }

};

int main()
{
    LinkedList l;
    cout << l.getSize() << "\n";
    l.InsertAtHead(10);
    cout << l.getSize() << "\n";
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    cout << l.getSize() << "\n";


    l.Traverse();

    l.Insert_At_any_index(1, 100);

    l.Traverse();

    l.Insert_At_any_index(3, 459);

    l.Traverse();

    cout << l.getSize() << "\n";

    return 0;
}
