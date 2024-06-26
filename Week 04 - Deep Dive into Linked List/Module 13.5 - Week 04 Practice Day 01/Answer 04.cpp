#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node * next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void InsertAtHead(int data)
    {
        Node * new_node = new Node(data);
        new_node -> next = head;
        head = new_node;
    }

    void LinkedList_Initialize(int values[], int size)
    {
        for (int i = size-1; i >= 0; --i)
        {
            InsertAtHead(values[i]);
        }
    }

    void PrintLinkedList() const
    {
        Node * current = head;
        while (current != NULL)
        {
            cout << current -> data << " ";
            current = current -> next;
        }
        cout << endl;
    }

    int Find_ith_Index( int index) const
    {
        Node * current = head;
        int count = 0;
        while (current != NULL)
        {
            if(count == index)
            {
                return current -> data;
            }
            count++;
            current = current-> next;
        }
        return -1;
    }
};

int main()
{
    LinkedList l;

    int n;
    cout << "Numbers of Elements: ";
    cin >> n;

    int values[n];
    for(int i = 0; i < n; i++)
    {
        cin >> values[i];
    }

    l.LinkedList_Initialize(values, n);

    int index;
    cout << "Enter the Index: ";
    cin >> index;

    int value = l.Find_ith_Index(index);
    if (value != -1)
    {
        cout << "Value isa: "<< value << endl;
    }
    else
    {
        cout << "Index is out of Bound!"<< endl;
    }

    return 0;
}
