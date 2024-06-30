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
private:
    Node *head;
    Node *tail;

public:
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void InsertAtHead(int val)
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

    DoublyLinkedList dblLink;

    dblLink.InsertAtHead(5);
    dblLink.InsertAtHead(4);
    dblLink.InsertAtHead(3);
    dblLink.InsertAtHead(2);
    dblLink.InsertAtHead(1);

    cout << "List before add Element: ";
    dblLink.printList();

    dblLink.InsertAtHead(0);
    cout << "List After add Element: ";
    dblLink.printList();

    return 0;
}
