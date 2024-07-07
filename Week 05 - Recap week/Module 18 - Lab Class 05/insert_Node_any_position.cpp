#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *nxt;
};

class linked_List
{
public:
    node *head;

    linked_List()
    {
        head = NULL;
    }

    node *create_New_Node(int data)
    {
        node *new_Node = new node;
        new_Node->data = data;
        new_Node->nxt = NULL;
        return new_Node;
    }

    void insert_At_Head(int data)
    {
        node *new_Node = create_New_Node(data);
        new_Node->nxt = head;
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
        cout << '\n';
    }

    void insert_Any_Position(int index, int data)
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
            cout << "Can't Insert!" << '\n';
            return;
        }
        node * new_Node = create_New_Node(data);
        new_Node-> nxt = a->nxt;
        a-> nxt = new_Node;
    }
};

int main()
{
    linked_List l;
    l.insert_At_Head(30);
    l.insert_At_Head(20);
    l.insert_At_Head(10);

    l.Traverse();

    l.insert_Any_Position(1,5);
    l.Traverse();
    l.insert_Any_Position(3,8);
    l.Traverse();

    return 0;
}