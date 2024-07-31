#include <bits/stdc++.h>

using namespace std;

class QUEUE
{
    int *ar;
    int start;
    int end;
    int size;
    int curSize;

public:
    QUEUE(int size)
    {
        ar = new int[size];
        start = 0;
        end = -1;
        this->size = size;
        curSize = 0;
    }

    void ENQUEUE(int val) // push
    {
        if (curSize == size)
        {
            cout << "Queue is full!\n";
            return;
        }
        end++;
        end = end % size;
        ar[end] = val;
        curSize++;
    }

    void DEQUEUE()
    {
        if (curSize == 0)
        {
            cout << "Queue is empty!\n";
            return;
        }
        start++;
        start = start % size;
        curSize--;
    }

    int GETSIZE()
    {
        return curSize;
    }

    int FRONT()
    {
        if (curSize == 0)
        {
            return -1;
        }
        return ar[start];
    }
};

int main()
{
    QUEUE q(5);

    q.ENQUEUE(10);
    q.ENQUEUE(20);
    q.ENQUEUE(30);
    q.ENQUEUE(40);
    q.ENQUEUE(50);
    //q.ENQUEUE(60);

    cout<< "Queue Size: " << q.GETSIZE() << '\n';
    cout <<"Front Value: "<< q.FRONT() << '\n';
    q.DEQUEUE();
    cout<< "Queue Size: " << q.GETSIZE() << '\n';
    cout <<"Front Value after Dequeue: "<< q.FRONT() << '\n';
    return 0;
}
