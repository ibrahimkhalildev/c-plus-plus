#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *nxt;
    Node *prev;

    Node(int val)
    {
        data = val;
        nxt = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList
{
public:
    Node *head;

    DoublyLinkedList()
    {
        head = NULL;
    }

    void insert_At_Head(int val)
    {
        Node *new_Node = new Node(val);
        if (head == NULL)
        {
            head = new_Node;
        }
        else
        {
            new_Node->nxt = head;
            head->prev = new_Node;
            head = new_Node;
        }
    }

    void insertAtIndex(int index, int val)
    {
        if (index < 0)
            return;

        Node *newNode = new Node(val);
        if (index == 0)
        {
            if (head == NULL)
            {
                head = newNode;
            }
            else
            {
                newNode->nxt = head;
                head->prev = newNode;
                head = newNode;
            }
            return;
        }
        Node *current = head;
        int count = 0;
        while (current != NULL && count < -1)
        {
            current = current->nxt;
            count++;
        }
        if (current == NULL)
        {
            return;
        }
        newNode->nxt = current->nxt;
        newNode->prev = current;

        if (current->nxt != NULL)
        {
            current->nxt->prev = newNode;
        }
        current->nxt = newNode;
    }

    void printList()
    {
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->nxt;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList dbl;

    dbl.insert_At_Head(5);
    dbl.insert_At_Head(4);
    dbl.insert_At_Head(3);
    dbl.insert_At_Head(2);
    dbl.insert_At_Head(1);

    cout << "Before Inserting Value at any Index: ";
    dbl.printList();

    dbl.insertAtIndex(1, 0);

    cout << "After Inserting Value at any Index: ";
    dbl.printList();

    return 0;
}