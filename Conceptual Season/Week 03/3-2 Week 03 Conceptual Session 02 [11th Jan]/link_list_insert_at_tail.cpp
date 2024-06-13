#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int value;
    Node *next; // next node address

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void display(Node *head)
{
    if (head == NULL)
        return;
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 60);
    insertAtTail(head, 99);
    insertAtTail(head, 599);

    display(head);
    // cout << head->value << " "<< head->next-> value;
    // Node *a = new Node(10);
    // Node *b = new Node(20);
    // Node *c = new Node(30);

    // a->next = b;
    // b->next = c;

    // cout << a->value << " "<<a->next->value << " " <<a->next->next->value;

    return 0;
}
