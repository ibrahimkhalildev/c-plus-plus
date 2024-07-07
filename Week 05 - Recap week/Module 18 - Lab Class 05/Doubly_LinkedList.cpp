#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node *prev;
};

class doubly_LinkedList
{
public:
    node *head;

    doubly_LinkedList()
    {
        head = NULL;
    }

    node *create_New_Node(int data)
    {
        node *new_Node = new node;
        new_Node->data = data;
        new_Node->nxt = NULL;
        new_Node->prev = NULL;
        return new_Node;
    }

    void insert_At_Head(int data)
    {
        node *new_Node = create_New_Node(data);
        if (head == NULL)
        {
            head = new_Node;
            return;
        }
        new_Node->nxt = head;
        head->prev = new_Node;
        head = new_Node;
    }

    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }

    void insert_At_Any_Index(int index, int data)
    {
        if (index == 0)
        {
            insert_At_Head(data);
            return;
        }
        node *a = head;
        int current_index = 0;
        while (current_index != index - 1)
        {
            if (a == NULL)
            {
                break;
            }
            a = a->nxt;
            current_index++;
        }
        if (a == NULL)
        {
            cout << "Can't insert!\n";
            return;
        }

        node *new_NOde = create_New_Node(data);
        new_NOde->nxt = a->nxt;
        node *b = a->nxt;
        if (b != NULL)
        {
            b->prev = new_NOde;
        }
        a->nxt = new_NOde;
        new_NOde->prev = a;
    }
};

int main()
{
    doubly_LinkedList dl;
    dl.insert_At_Head(30);
    dl.insert_At_Head(20);
    dl.insert_At_Head(10);

    dl.Traverse();

    dl.insert_At_Any_Index(2, 40);
    dl.Traverse();
    dl.insert_At_Any_Index(4, 100);
    dl.Traverse();

    return 0;
}