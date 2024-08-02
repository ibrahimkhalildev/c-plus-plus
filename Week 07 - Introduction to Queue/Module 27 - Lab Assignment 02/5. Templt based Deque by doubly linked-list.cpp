#include <bits/stdc++.h>

using namespace std;

template <class T>
class node
{
public:
    T data;
    node *prv;
    node *nxt;

    node(T value)
    {
        data = value;
        prv = NULL;
        nxt = NULL;
    }
};

template <class T>
class Deque
{
public:
    node<T> *head;
    node<T> *tail;
    int sz;

    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    void push_back(T value)
    {
        node<T> *newNode = new node<T>(value);
        if (sz == 0)
        {
            head = tail = newNode;
        }
        else
        {
            tail->nxt = newNode;
            newNode->prv = tail;
            tail = newNode;
        }
        sz++;
    }

    void push_front(T value)
    {
        node<T> *newNode = new node<T>(value);
        if (sz == 0)
        {
            head = tail = newNode;
        }
        else
        {
            head->prv = newNode;
            newNode->nxt = head;
            head = newNode;
        }
        sz++;
    }

    void pop_back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            return;
        }
        if (sz == 1)
        {
            delete tail;
            head = tail = NULL;
        }
        else
        {
            node<T> *tmp = tail;
            tail = tail->prv;
            tail -> nxt = NULL;
            delete tmp;
        }
        sz--;
    }

    void pop_front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            return;
        }
        if (sz == 1)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            node<T> *tmp = head;
            head = head->nxt;
            head->prv = NULL;
            delete tmp;
        }
        sz--;
    }

    T front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            return -1;
        }
        return head->data;
    }
    T back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty!\n";
            return -1;
        }
        return tail->data;
    }
};
int main()
{
    Deque<int> d;

    d.push_back(5);
    d.push_back(10);
    d.push_back(15);

    cout << "Back: " << d.back() << " & Front: " << d.front() << '\n';

    d.push_front(20);
    cout << "Back: " << d.back() << " & Front: " << d.front() << '\n';

    d.pop_front();
    cout << "Back: " << d.back() << " & Front: " << d.front() << '\n';

    d.pop_back();
    cout << "Back: " << d.back() << " & Front: " << d.front() << '\n';

    return 0;
}
