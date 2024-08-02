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
            node<T> *temp = tail;
            tail = tail->prv;
            tail->nxt = NULL;
            delete temp;
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
            node<T> *temp = head;
            head = head->nxt;
            head->prv = NULL;
            delete temp;
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

    T max()
    {
        if(sz == 0)
        {
            cout <<"Deque is empty!\n";
            return -1;
        }
        T maxValue = head->data;
        node<T> *current = head;
        while (current != NULL)
        {
            if(current->data > maxValue)
            {
                maxValue = current->data;
            }
            current = current->nxt;
        }
        return maxValue;
    }

    T min()
    {
        if(sz == 0)
        {
            cout << "Deque is empty!\n";
            return -1;
        }
        T minValue = head-> data;
        node<T> *current = head;
        while (current != NULL)
        {
            if (current -> data < minValue)
            {
                minValue = current -> data;
            }
            current = current->nxt;
        }
        return minValue;
    }
};

int main()
{
    Deque<int> d;

    d.push_back(5);
    d.push_back(10);
    d.push_back(100);
    d.push_back(3);
    d.push_back(500);
    d.push_back(500);


    cout << "Back: " << d.back() << " & Front: " << d.front() << '\n';

    d.push_front(20);
    cout << "Back: " << d.back() << " & Front: " << d.front() << '\n';

    cout << "Max: " << d.max() << " & Min: " << d.min() << '\n';

    d.pop_front();
    cout << "Back: " << d.back() << " & Front: " << d.front() << '\n';

    d.pop_back();
    cout << "Back: " << d.back() << " & Front: " << d.front() << '\n';

    cout << "Max: " << d.max() << " & Min: " << d.min() << '\n';
    return 0;
}
