#include <bits/stdc++.h>

using namespace std;

template <class T>
class node
{
public:
    T data;
    node<T> *nxt;
};

template <class T>
class QUEUE
{
public:
    node<T> *head;
    node<T> *tail;
    int sz;

    QUEUE()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node<T> *CreateNode(T value)
    {
        node<T> *newNode = new node<T>;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }

    void ENQUEUE(T value)
    {
        sz++;
        node<T> *newNode = CreateNode(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->nxt = newNode;
        tail = newNode;
    }

    void DEQUEUE()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            return;
        }
        if (sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node<T> *a = head;
        head = head->nxt;
        sz--;
        delete a;
    }

    T front()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            return T();
        }
        return head->data;
    }

    int size()
    {
        return sz;
    }
};
int main()
{
    QUEUE<int> q;
    q.ENQUEUE(5);
    q.ENQUEUE(10);
    q.ENQUEUE(15);
    cout << "Q Size: " << q.size() << "\n";

    cout << q.front() << "\n";
    q.DEQUEUE();
    cout << q.front() << "\n";
    q.DEQUEUE();
    cout << q.front() << "\n";
    q.DEQUEUE();

    cout << "Q Size: " << q.size() << "\n\n";

    // Example with a different type
    QUEUE<string> qs;
    qs.ENQUEUE("I Love Allah");
    qs.ENQUEUE("I Love Muhammad (SM)");
    qs.ENQUEUE("I read Quran");

    cout << "QS Size: " << qs.size() << "\n";

    cout << qs.front() << "\n";
    qs.DEQUEUE();
    cout << qs.front() << "\n";
    qs.DEQUEUE();

    cout << "QS Size: " << qs.size() << "\n";

    return 0;
}
