#include <bits/stdc++.h>

using namespace std;

template <class data_type>
class node
{
public:
    data_type data;
    node<data_type> *nxt;
};

template <class data_type>
class QUEUE
{
public:
    node<data_type> *head;
    node<data_type> *tail;
    int sz;

    QUEUE()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node<data_type> *CreateNode(data_type value)
    {
        node<data_type> *newNode = new node<data_type>;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }

    void ENQUEUE(data_type value)
    {
        sz++;
        node<data_type> *newNode = CreateNode(value);
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
        node<data_type> *a = head;
        head = head->nxt;
        sz--;
        delete a;
    }
    data_type front()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            return data_type();
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
