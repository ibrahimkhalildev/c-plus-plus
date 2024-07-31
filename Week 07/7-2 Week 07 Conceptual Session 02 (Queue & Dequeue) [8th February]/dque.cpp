#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

class DEQUE
{
public:
    Node *head;
    Node *tail;
    int size;

    DEQUE()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void PUSH_BACK(int val)
    {
        Node *newNode = new Node(val);

        if (size == 0)
        {
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        size++;
    }

    // void PUSH_FRONT()
    // {

    // }

    void POP_BACK()
    {
        if (size == 0)
        {
            cout << "DEQUE is empty!\n";
            return;
        }
        // size == 1
        if (head == tail)
        {
            Node *tmp = head;
            head = NULL;
            tail = NULL;
            delete tmp;
            size--;
            return;
        }
        Node *delNode = tail;
        tail = delNode->prev;
        delete delNode;
        size--;
    }

    int GET_SIZE()
    {
        return size;
    }
};

int main()
{

    DEQUE dq;
    dq.PUSH_BACK(10);
    dq.PUSH_BACK(20);
    dq.PUSH_BACK(50);
    dq.PUSH_BACK(30);
    dq.PUSH_BACK(60);
    dq.PUSH_BACK(80);
    cout <<"Size: "<< dq.GET_SIZE() << "\n";

    dq.POP_BACK();
    dq.POP_BACK();
    cout <<"Size: "<< dq.GET_SIZE() << "\n";

    return 0;
}
