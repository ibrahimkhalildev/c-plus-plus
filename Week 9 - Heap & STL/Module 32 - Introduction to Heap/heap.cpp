#include <bits/stdc++.h>

using namespace std;

class MaxHeap
{
public:
    vector<int> nodes;

    MaxHeap()
    {
    }
    // Complexity O(log n)
    void up_heapify(int idx)
    {
        while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2])
        {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }

    // Complexity O(1)
    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }

    // Complexity O(n)
    void PrintHeap()
    {
        for (int i = 0; i < nodes.size(); i++)
        {
            cout << nodes[i] << " ";
        }
        cout << '\n';
    }
};

int main()
{
    MaxHeap heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);
    heap.insert(12);


    heap.PrintHeap();
    return 0;
}
