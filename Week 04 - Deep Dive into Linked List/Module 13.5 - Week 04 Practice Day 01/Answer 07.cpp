#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

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

    void InsertAtTail(int data)
    {
        Node *new_node = new Node(data);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
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
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void Sort()
    {
        if (!head || !head->next)
        {
            return;
        }
        Node *sorted = NULL;

        Node *current = head;
        while (current != NULL)
        {
            Node *next = current->next;
            if (sorted == NULL || sorted->data >= current->data)
            {
                current->next = sorted;
                sorted = current;
            }
            else
            {
                Node *temp = sorted;
                while (temp->next != NULL && temp->next->data < current->data)
                {
                    temp = temp->next;
                }
                current->next = temp->next;
                temp->next = current;
            }
            current = next;
        }
        head = sorted;
    }
};

int main()
{
    LinkedList l;

    int n;
    cout << "Enter Element Size: ";
    cin >> n;

    int *values = new int[n];
    cout << "Enter the Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> values[i];
    }
    l.LinkedListInitialize(values, n);
    l.PrintLinkedList();

    l.Sort();
    l.PrintLinkedList();

    delete[] values;

    return 0;
}