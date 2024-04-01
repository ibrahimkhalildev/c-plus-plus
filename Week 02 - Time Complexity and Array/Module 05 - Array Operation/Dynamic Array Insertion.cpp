#include <bits/stdc++.h>

using namespace std;

// Memory Complexity O(n);
class Array
{
private:
    int *arr;
    int cap;
    int sz;
    void Increase_size()
    {
        cap = cap * 2;
        int *tmp = new int[cap];
        for (int i = 0; i < sz; i++)
        {
            tmp[i] = arr[i];
        }
        delete[] arr;
        arr = tmp;
    }

public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        sz = 0;
    }
    // Time Complexity O(1)
    void Push_back(int x)
    {
        // Time Complexity O(n)
        if (cap == sz)
        {
            Increase_size();
        }
        arr[sz] = x;
        sz++;
    }
    //O(sz-position) O(sz)
    void Insert(int position, int x)
    {
        if (cap == sz)
        {
            Increase_size();
        }
        for (int i = sz - 1; i >= position; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[position] = x;
        sz++;
    }
    // O(sz);
    void Print()
    {
        for (int i = 0; i < sz; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    // O(1);
    int getSize()
    {
        return sz;
    }
    // O(1)
    int getElement(int idx)
    {
        if (idx >= sz)
        {
            cout << "Error! " << idx << " is out of bound!\n";
            return -1;
        }
        return arr[idx];
    }
};
int main()
{
    Array a;
    a.Push_back(10);
    a.Push_back(15);
    a.Push_back(20);
    a.Push_back(25);
    a.Push_back(30);
    a.Insert(1, 5);
    a.Print();

    cout << a.getSize() << "\n";
    for (int i = 0; i < a.getSize(); i++)
    {
        cout << a.getElement(i) << "\n";
    }

    return 0;
}
