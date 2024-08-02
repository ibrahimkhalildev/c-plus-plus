#include <bits/stdc++.h>

using namespace std;

template <class T>
class QUEUE
{
public:
    T *a;
    int array_cap;
    int l, r;
    int sz;

    QUEUE()
    {
        a = new T[1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz = 0;
    }

    ~QUEUE()
    {
        delete[] a;
    }

    void remove_Circular()
    {
        if (l > r)
        {
            T *tmp = new T[array_cap];
            int idx = 0;
            for (int i = l; i < array_cap; i++)
            {
                tmp[idx] = a[i];
                idx++;
            }
            for (int i = 0; i <= r; i++)
            {
                tmp[idx] = a[i];
                idx++;
            }
            swap(tmp, a);
            l = 0;
            r = array_cap - 1;
            delete[] tmp;
        }
    }

    void increase_size()
    {
        remove_Circular();
        T *tmp = new T[array_cap * 2];
        for (int i = 0; i < array_cap; i++)
            tmp[i] = a[i];
        swap(a, tmp);
        array_cap = array_cap * 2;
        delete[] tmp;
    }

    void ENQUEUE(T value)
    {
        if (sz == array_cap)
        {
            increase_size();
        }
        r++;
        if (r == array_cap)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }

    void DEQUEUE()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            return;
        }
        l++;
        if (l == array_cap)
        {
            l = 0;
        }
        sz--;
    }

    T front()
    {
        if (sz == 0)
        {

            cout << "QUEUE is empty!\n";
            return T();
        }
        return a[l];
    }
};

int main()
{
    QUEUE<int> q;
    q.ENQUEUE(5);
    q.ENQUEUE(6);
    q.ENQUEUE(7);

    cout << q.front() << " ";
    q.DEQUEUE();
    cout << q.front() << " ";
    q.DEQUEUE();
    cout << q.front() << "\n\n";
    q.DEQUEUE();

    QUEUE<string> q_strng;

    q_strng.ENQUEUE("I Love Allah");
    q_strng.ENQUEUE("I Love Muhammad (SM)");
    q_strng.ENQUEUE("I read Quran");

    cout << q_strng.front() << "\n";
    q_strng.DEQUEUE();
    cout << q_strng.front() << "\n";
    q_strng.DEQUEUE();
    cout << q_strng.front() << "\n";
    q_strng.DEQUEUE();

    return 0;
}
