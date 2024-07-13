#include <bits/stdc++.h>

using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node *nxt;
    Node *prv;
};

template <class T>
class DoublyLinkedList
{
public:
    Node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    // Creates a new node with the given data and returns it O(1)
    Node<T> *CreateNewNode(T data)
    {
        Node<T> *new_Node = new Node<T>;
        new_Node->data = data;
        new_Node->nxt = NULL;
        new_Node->prv = NULL;
        return new_Node;
    }

    // Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        Node<T> *new_Node = CreateNewNode(data);
        if (head == NULL)
        {
            head = new_Node;
            return;
        }
        Node<T> *a = head;
        new_Node->nxt = a;
        a->prv = new_Node;
        head = new_Node;
    }

    // Deletes the value at head
    void DeleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        Node<T> *a = head;
        Node<T> *b = head->nxt;
        delete a;
        if (b != NULL)
        {
            b->prv = NULL;
        }
        head = b;
        sz--;
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }
};

// Stack Using doubly Linked List
template <class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;
    Stack()
    {
    }

    T top()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }

    void push(T val)
    {
        dl.InsertAtHead(val);
    }

    void pop()
    {
        if (dl.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            return;
        }
        dl.DeleteAtHead();
    }
    int getSiz()
    {
        return dl.getSize();
    }
};

int main()
{
    Stack<int> st;
    st.push(2);
    cout << st.top() << "\n";
    st.push(3);
    cout << st.top() << "\n";
    st.push(1);
    cout << st.top() << "\n";
    st.push(5);
    cout << st.top() << "\n";
    st.push(4);
    cout << st.top() << "\n";
    cout << endl;

    // Sorting a stack using an another temporary stack
    Stack<int> tmp;
    while (st.getSiz() > 0)
    {
        int t = st.top();
        st.pop();
        while (tmp.getSiz() > 0)
        {
            if (tmp.top() < t)
            {
                break;
            }
            st.push(tmp.top());
            tmp.pop();
        }
        tmp.push(t);
    }
    swap(st, tmp);

    while (st.getSiz() > 0)
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
