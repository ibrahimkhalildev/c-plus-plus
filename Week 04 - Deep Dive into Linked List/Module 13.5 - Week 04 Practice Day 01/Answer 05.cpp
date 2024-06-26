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
        Node *new_node = new Node(data);
        new_node-> next = head;
        head = new_node;
    }

    void InsertAtTail(int data)
    {
        Node *new_node = new Node(data);
        if(head == NULL)
        {
            head = new_node;
            return;
        }
        Node * current = head;
        while (current -> next != NULL)
        {
            current = current->next;
        }
        current -> next = new_node;
    }

    void LinkedList_Initialize(int values[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            InsertAtTail(values[i]);
        }
    }

    void PrintLinkedList() const
    {   
        Node *current = head;
        while (current != NULL)
        {
            cout << current -> data << " ";
            current = current -> next;
        }
        cout << endl;
    }

};

int main()
{
    LinkedList l;

    int n;
    cout << "Number of Elements: ";
    cin >> n;

    int values[n];
    for (int i = 0; i < n; i++)
    {
        cin >> values[i];
    }
    
    l.LinkedList_Initialize(values, n);
    
    int new_value_of_Tail;
    cout << "Input New Tail: ";
    cin >> new_value_of_Tail;

    l.InsertAtTail(new_value_of_Tail);

    l.PrintLinkedList();


    return 0;
}