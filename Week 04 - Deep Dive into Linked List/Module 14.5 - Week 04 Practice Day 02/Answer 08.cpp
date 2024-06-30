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

    bool isPalindrome()
    {
        if (head == NULL)
        {
            return true;
        }
        Node *tail = head;
        while (tail->nxt != NULL)
        {
            tail = tail->nxt;
        }

        Node *left = head;
        Node *right = tail;
        while (left != NULL && right != NULL && left != right && left->prev != right)
        {
            if (left->data != right->data)
            {
                return false;
            }
            left = left->nxt;
            right = right->prev;
        }
        return true;
    }

    void printList()
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
    DoublyLinkedList dll;

    dll.InsertAtHead(1);
    dll.InsertAtHead(2);
    dll.InsertAtHead(3);
    dll.InsertAtHead(2);
    dll.InsertAtHead(1);

    cout << "Doubly Linked List: ";
    dll.printList();

    cout << (dll.isPalindrome() ? "True" : "False") << endl;

    return 0;
}
