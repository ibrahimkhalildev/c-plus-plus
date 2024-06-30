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

class Stack
{
    Node *head;
    Node *top;
    int sz = 0;

public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    void PUSH(int val)
    {
        sz++;
        Node *new_Node = new Node(val);
        if (head == NULL)
        {
            head = top = new_Node;
            return;
        }
        top->nxt = new_Node;
        new_Node->prev = top;
        top = new_Node;
    }

    void POP()
    {
        Node *del_Node = top;
        if (top == head)
        {
            head = top = NULL;
        }
        else
        {
            top = del_Node->prev;
            top->nxt = NULL;
        }
        delete del_Node;
        sz--;
    }

    bool EMPTY()
    {
        if (sz == 0)
            return true;
        return false;
    }

    int SIZE()
    {
        return sz;
    }

    int TOP()
    {
        return top->data;
    }
};
