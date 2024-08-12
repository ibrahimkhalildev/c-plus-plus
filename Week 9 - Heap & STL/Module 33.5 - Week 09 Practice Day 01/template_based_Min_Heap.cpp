#include <bits/stdc++.h>

using namespace std;

template <class T>
class MinHeap
{
public:
    vector<T> nodes;

    MinHeap()
    {
    }

    void up_hipify(int idx)
    {
        while (idx > 0 && nodes[idx] < nodes[(idx - 1) / 2])
        {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }

    void insert(T x)
    {
        nodes.push_back(x);
        up_hipify(nodes.size() - 1);
    }

    // O(1)
    void Print()
    {
        for (int i = 0; i < nodes.size(); i++)
        {
            cout << nodes[i] << " ";
        }
        cout << '\n';
    }

    // O(log n)
    void down_hipify(int idx)
    {
        while (true)
        {
            int smallest = idx;
            int left_child = 2 * idx + 1;
            int right_child = 2 * idx + 2;

            if (left_child < nodes.size() && nodes[smallest] > nodes[left_child])
                smallest = left_child;
            if (right_child < nodes.size() && nodes[smallest] > nodes[right_child])
                smallest = right_child;
            if (smallest == idx)
                break;
            swap(nodes[idx], nodes[smallest]);
            idx = smallest;
        }
    }

    void Delete(int idx)
    {
        if (idx >= nodes.size())
            return;
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_hipify(idx);
    }
    T get_Min()
    {
        if (nodes.empty())
            return -1;
        return nodes[0];
    }
};

int main()
{
    MinHeap<int> mh;
    mh.insert(4);
    mh.insert(7);
    mh.insert(9);
    mh.insert(1);
    mh.insert(10);
    mh.insert(26);
    mh.insert(30);
    mh.insert(55);

    mh.Print();

    cout << mh.get_Min() << '\n';
    mh.Delete(0);

    cout << '\n';
    mh.Print();
    cout << mh.get_Min() << '\n';

    return 0;
}