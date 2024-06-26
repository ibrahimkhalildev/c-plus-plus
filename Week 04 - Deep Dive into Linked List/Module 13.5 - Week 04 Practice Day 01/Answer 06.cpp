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
    void InsertAtTail(int data)
    {
       Node * new_node = new Node(data);
       if(head == NULL)
       {
            head = new_node;
            return;
       }
       Node * current = head;
       while (current -> next != NULL)
       {
            current = current -> next;
       }
       current -> next = new_node;

    }

    void LinkedListInitialize(int values[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            InsertAtTail(values[i]);
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

    bool is_Contain_Value(int value) const
    {
        Node *current = head;
        while (current != NULL)
        {
            if(current -> data == value)
            {
                return true;
            }
            current = current -> next;
        }
        return false;
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

    l.LinkedListInitialize(values, n);

    l.PrintLinkedList();

    int element_to_find;
    cout << "Input a Value: ";
    cin>> element_to_find;

    if (l.is_Contain_Value(element_to_find))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}
