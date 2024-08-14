#include <bits/stdc++.h>

using namespace std;

class MaxHeap
{
public:
    vector<int> nodes;

    MaxHeap()
    {
    }

    void up_heapify(int idx)
    {
        while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2])
        {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }

    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }

    void PrintHeap()
    {
        for (int i = 0; i < nodes.size(); i++)
        {
            cout << nodes[i] << " ";
        }
        cout << '\n';
    }

    void down_heapify(int idx)
    {
        while (1)
        {
            int largest = idx;
            int left_child = 2 * idx + 1;
            int right_child = 2 * idx + 2;
            if (left_child < nodes.size() && nodes[largest] < nodes[left_child])
                largest = left_child;
            if (right_child < nodes.size() && nodes[largest] < nodes[right_child])
                largest = right_child;
            if (largest == idx)
                break;
            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }
    }

    void Delete(int idx)
    {
        if (idx >= nodes.size())
            return;
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(idx);
    }
};

class MinHeap
{
public:
    MaxHeap mx;

    void insert(int x)
    {
        mx.insert(-x);
    }

    void Delete(int idx)
    {
        if (idx >= mx.nodes.size())
            return;
        swap(mx.nodes[idx], mx.nodes[mx.nodes.size() - 1]);
        mx.nodes.pop_back();
        mx.down_heapify(idx);
    }

    int getMin()
    {
        if (mx.nodes.empty())
            throw runtime_error("Heap is empty");
        return -mx.nodes[0];
    }
};

int main()
{
    MinHeap heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(10);
    heap.insert(26);
    heap.insert(30);
    heap.insert(55);

    heap.Delete(0);
    heap.Delete(0);

    cout << "MinHeap: ";
    cout << heap.getMin() << '\n';
    return 0;
}
