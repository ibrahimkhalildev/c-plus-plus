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

    string contains(int val)
    {
        Node *current = head;
        while (current != NULL)
        {
            if (current->data == val)
            {
                return "True";
            }
            current = current->nxt;
        }
        return "False";
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

    DoublyLinkedList dbl_list;

    dbl_list.InsertAtHead(5);
    dbl_list.InsertAtHead(4);
    dbl_list.InsertAtHead(3);
    dbl_list.InsertAtHead(2);
    dbl_list.InsertAtHead(1);

    cout << "Doubly Linke List is: ";
    dbl_list.printList();

    int elementToFind = 10;
    cout << dbl_list.contains(elementToFind) << endl;

    return 0;
}