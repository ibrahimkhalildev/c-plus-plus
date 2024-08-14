#include <bits/stdc++.h>

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
    Node *tail;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertHead(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
            head = tail = newNode;
        else
        {
            newNode->nxt = head;
            newNode->prev = newNode;
            head = newNode;
        }
    }

    void insertTail(int val)
    {
        Node *newNode = new Node(val);
        if (tail == NULL)
            head = tail = newNode;
        else
        {
            tail->nxt = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void insertMid(int val)
    {
        if (head == NULL)
        {
            insertHead(val);
            return;
        }
        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->nxt != NULL)
        {
            fast = fast->nxt->nxt;
            if (fast != NULL)
                slow = slow->nxt;
        }
        Node *newNode = new Node(val);
        newNode->prev = slow;
        newNode->nxt = slow->nxt;

        if (slow->prev != NULL)
            slow->nxt->prev = newNode;
        else
            tail = newNode;
        slow->nxt = newNode;
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
    DoublyLinkedList dblListl;

    dblListl.insertHead(6);
    dblListl.insertHead(5);
    dblListl.insertHead(4);
    dblListl.insertHead(3);
    dblListl.insertHead(2);
    dblListl.insertHead(1);

    cout << "Before Inserting: \n";
    dblListl.printList();

    dblListl.insertHead(0);
    cout << "After Inserting at Head: \n";
    dblListl.printList();

    dblListl.insertTail(7);
    cout << "After Inserting at Tail: \n";
    dblListl.printList();

    dblListl.insertMid(99);
    cout << "After Inserting at Mid: \n";
    dblListl.printList();

    return 0;
}