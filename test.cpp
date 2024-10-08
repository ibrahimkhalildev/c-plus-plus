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

class LinkedList
{
public:
    Node *head;
    Node *tail;

    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertHead(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->nxt = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertTail(int val)
    {
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = tail = newNode;
        }
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

        if (slow->nxt != NULL)
            slow->nxt->prev = newNode;
        else
            tail = newNode;
        slow->nxt = newNode;
    }

    void print()
    {
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->nxt;
        }
        cout << "\n";
    }

    void Merge(LinkedList &a)
    {
        if (a.head == NULL)
            return;

        if (tail == NULL)
        {
            head = a.head;
            tail = a.tail;
        }
        else
        {
            tail->nxt = a.head;
            a.head->prev = tail;
            tail = a.tail;
        }

        // Clear list `a`
        a.head = a.tail = NULL;
    }
};

int main()
{
    LinkedList a;
    LinkedList b;

    // Test `insertTail` with debug output
    cout << "Inserting into list `a`:\n";
    a.insertHead(1);
    a.insertTail(5);
    a.insertTail(10); // Add more to see the effect
    cout << "Print A after insertions:\n";
    a.print();  // Expected output: 1 5 10

    // Inserting elements into list `b`
    cout << "Inserting into list `b`:\n";
    b.insertHead(10);
    b.insertTail(50);
    b.insertTail(100); // Add more to see the effect
    cout << "Print B after insertions:\n";
    b.print();  // Expected output: 10 50 100

    // Merging list `b` into list `a`
    a.Merge(b);
    cout << "Print After Merge:\n";
    a.print();  // Expected output: 1 5 10 10 50 100

    cout << "Print B after Merge:\n";
    b.print();  // Expected output: (empty list)

    return 0;
}
