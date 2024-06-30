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

    void InsertAtHead(int val)
    {
        Node *newNode = new Node(val);
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
    }

    void deleteElement(int val)
    {
        Node *current = head;
        while (current != NULL)
        {
            if (current->data == val)
            {
                if (current->prev != NULL)
                {
                    current->prev->nxt = current->nxt;
                }
                else
                {
                    head = current -> nxt;
                }
                if (current -> nxt != NULL)
                {
                    current -> nxt -> prev = current -> prev;
                }
                delete current;
                return;
            }
            current = current -> nxt;
        }
    }

    void printList()
    {
        Node * current = head;
        while (current != NULL)
        {
            cout << current -> data << " ";
            current = current ->nxt;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList dll;

    dll.InsertAtHead(5);
    dll.InsertAtHead(4);
    dll.InsertAtHead(6);
    dll.InsertAtHead(2);
    dll.InsertAtHead(1);

    cout << "Doubley Linked List: ";
    dll.printList();


    int elementToDelete = 6;

    dll.deleteElement(elementToDelete);
    cout << "Doubley Linked List after Delete: ";
    dll.printList();
    return 0;
}