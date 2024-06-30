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

    void reverse()
    {
        Node *current = head;
        Node *temp = NULL;

        while (current != NULL)
        {
            temp = current->prev;
            current->prev = current->nxt;
            current->nxt = temp;
            current = current->prev;
        }
        if (temp != NULL)
        {
            head = temp -> prev;
        }
    }

    void print_List()
    {
        Node * current = head;
        while (current != NULL)
        {
            cout << current -> data << " ";
            current = current -> nxt;
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

    cout << "Doubly Linked List: ";
    dbl_list.print_List();

    dbl_list.reverse();

    cout << "Reverse Doubly Linked List: ";

    dbl_list.print_List();
    cout << endl;

    return 0;
}