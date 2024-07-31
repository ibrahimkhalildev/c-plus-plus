#include <iostream>

using namespace std;
const int MAX_SIZE = 10;

// Implementation of a Template based Queue using a static circular array
template<class T>
class QUEUE
{
public:
    T a[MAX_SIZE];
    int l, r;
    int sz;

    QUEUE()
    {
        l = 0;
        r = -1;
        sz = 0;
    }

    void ENQUEUE(T value)
    {
        if(sz == MAX_SIZE)
        {
            cout << "Queue is full!\n";
            return;
        }
        r++;
        if(r == MAX_SIZE)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }

    //O(1)
    void DEQUEUE()
    {
        if(sz==0)
        {
            cout <<"Queue is empty!\n";
            return;
        }
        l++;
        if (l == MAX_SIZE)
        {
            l = 0;
        }
        sz--;
    }
    // O(1)
    T front()
    {
        if(sz == 0)
        {
            cout <<"Queue is empty!\n";
            return T();
        }
        return a[l];
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
    q.ENQUEUE(6);
    q.ENQUEUE(90);

    cout << "Q size: " << q.size() << "\n";
    cout << "Front element: " << q.front() << "\n";
    q.DEQUEUE();
    cout << "Front element: " << q.front() << "\n";
    q.DEQUEUE();
    cout << "Front element: " << q.front() << "\n";
    q.DEQUEUE();

    cout << "Q size: " << q.size() << "\n";

    QUEUE<string> q_strng;

    q_strng.ENQUEUE("I Love Allah");
    q_strng.ENQUEUE("I Love Muhammad (SM)");
    q_strng.ENQUEUE("I read Quran");

    cout << "Q size: " << q_strng.size() << "\n";
    cout << "Front element: " << q_strng.front() << "\n";
    q_strng.DEQUEUE();
    cout << "Front element: " << q_strng.front() << "\n";
    q_strng.DEQUEUE();
    cout << "Front element: " << q_strng.front() << "\n";
    q_strng.DEQUEUE();

    cout << "Q size: " << q.size() << "\n";

    return 0;
}
