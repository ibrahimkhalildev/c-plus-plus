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
    node* head;
    int size;

    LinkedList()
    {
        head = NULL;
        size = 0;
    }

    node *create_New_Node(int value)
    {
        node * newnode = new node;
        newnode -> data = value;
        newnode -> nxt = NULL;
        return newnode;
    }

    void Insert_AtHead(int value)
    {
        node * a = create_New_Node(value);
        if(head == NULL)
        {
            head = a;
        }
        else
        {
            a -> nxt = head;
            head  = a;
        }
        size++;
    }
    void Traverse()
    {
        node *a = head;
        while(a != NULL)
        {
            cout << a->data << " ";
            a = a-> nxt;
        }
        cout << "\n";
    }

    int getSize()
    {
        return size;
    }

    int getValue (int index)
    {
        if (index >= size)
        {
            return -1;
        }
        node *a = head;
        for (int i = 0; i < index ; i++)
        {
            a = a -> nxt;
        }
        return a-> data;
    }
    void print_Reverse(node *a)
    {
        if(a == NULL)
        {
            return;
        }
        print_Reverse(a -> nxt);
        cout << a -> data << " ";
    }
    void printReverse()
    {
        print_Reverse(head);
        cout << "\n";
    }

    void swapFirst()
    {
        if (size < 2)
        {
            return;
        }
        node *first = head;
        node *second = head -> nxt;
        first -> nxt = second -> nxt;
        second -> nxt = first;
        head = second;
    }

};

int main()
{   
    LinkedList l;
    cout << l.getSize() << "\n";
    l.Insert_AtHead(5);
    cout << l.getSize() << "\n";
    l.Insert_AtHead(6);
    l.Insert_AtHead(30);
    cout << l.getSize() << "\n";
    l.Insert_AtHead(20);
    l.Insert_AtHead(30);

    cout << l.getValue(2) << "\n";
    cout << l.getValue(6) << "\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();


    return 0;
}