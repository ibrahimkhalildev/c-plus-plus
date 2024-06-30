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
        prev + NULL;
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

    int getIndex(int index)
    {
        Node *current = head;
        int count = 0;
        while (current != NULL)
        {
            if (count == index)
            {
                return current->data;
            }
            count++;
            current = current->nxt;
        }
        return -1;
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
    dbl_list.printList();

    int index = 3;
    int value = dbl_list.getIndex(index);
    if (value != -1)
    {
        cout << "Value of the Index " << index << " is: " << value << endl;
    }
    else
    {
        cout << "Index is out of Bound!" << '\n';
    }

    return 0;
}
