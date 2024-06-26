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
    Node * head;

    LinkedList()
    {
        head = NULL;
    }

    void InsertAtHead (int data)
    {
        Node * new_node = new Node(data);
        new_node -> next = head;
        head = new_node;
    }

    void RemoveHead()
    {
        if(head != NULL)
        {
            Node* temp = head;
            head = head ->next;
            delete temp;
            temp = NULL;
        }
    }

    void LinkedList_Initialize(int values[], int size)
    {
        for (int i = size -1; i >= 0; --i)
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
};

int main()
{
    LinkedList l;
    int values[] = {1,2,3,4,5};

    l.LinkedList_Initialize(values, 5);

    l.PrintLinkedList();
    l.RemoveHead();
    l.PrintLinkedList();

    return 0;
}