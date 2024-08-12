#include <bits/stdc++.h>

using namespace std;

template <class T>
class MaxHeap
{
public:
    vector<T> nodes;
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
    void insert(T x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }
    // O(1)
    void PrintHeap()
    {
        for (int i = 0; i < nodes.size(); i++)
        {
            cout << nodes[i] << " ";
        }
        cout << '\n';
    }

    // O(log n)
    void down_heapify(int idx)
    {
        while (true)
        {
            int largest = idx;
            int left_child = 2 * idx + 1;
            int right_child = 2 * idx + 2;
            if (left_child < nodes.size() && nodes[largest] < nodes[left_child])
            {
                largest = left_child;
            }
            if (right_child < nodes.size() && nodes[largest] < nodes[right_child])
            {
                largest = right_child;
            }
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

    T get_Max()
    {
        if (nodes.empty())
        {
            return -1;
        }
        return nodes[0];
    }
};

int main()
{
    MaxHeap<int> heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);
    heap.insert(26);
    heap.insert(30);
    heap.insert(55);

    heap.PrintHeap();

    cout << heap.get_Max() <<'\n';
    heap.Delete(0);

    cout << '\n';
    heap.PrintHeap();
    cout << heap.get_Max() <<'\n';
    return 0;
}
