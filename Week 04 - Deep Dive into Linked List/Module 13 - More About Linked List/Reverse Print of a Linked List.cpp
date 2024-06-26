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

    void deleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        sz--;
        node *a = head;
        head = a->nxt;
        delete a;
    }
    void deleteAnyIndex(int index)
    {
        if (index <0 || index > sz -1)
        {
            return;
        }

        if (index == 0)
        {
            deleteAtHead();
            return;
        }
        sz--;
        node *a = head;
        int current_index = 0;
        while (current_index != index-1)
        {
           a = a -> nxt;
           current_index++;
        }
        node *b = a-> nxt;
        a -> nxt = b -> nxt;
        delete b;
    }

    void InsertAfterValue(int value, int data)
    {
        node * a = head;
        while (a != NULL)
        {
            if (a-> data == value)
            {
                break;
            }
            a = a-> nxt;
        }
        if( a == NULL)
        {
            cout << value <<"Doesn't exist in Linked List!"<<"\n";
            return;
        }
        sz++;
        node * newnode = CreateNewNode(data);
        newnode -> nxt = a->nxt;
        a -> nxt = newnode;
    }
    void ReversePrint2(node *a)
    {
        if(a == NULL)
        {
            return;
        }
        ReversePrint2(a-> nxt);
        cout << a-> data << " ";
    }
    void ReversePrint()
    {
        ReversePrint2(head);
        cout << "\n";
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(30);
    l.InsertAtHead(10);
    l.InsertAtHead(5);
    l.InsertAtHead(1);

    l.Traverse();

    l.ReversePrint();
    
    l.Traverse();

    return 0;
}
