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

    // O(log n)
    void down_heapify(int idx)
    {
        while (1)
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
    
    //O(log n)
    void Delete(int idx)
    {
        if (idx >= nodes.size())
            return;
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    //O(1)
    int get_Max()
    {
        if (nodes.empty())
        {
            cout << "Heap is empty!\n";
        }
        return nodes[0];
    }

    //O(log n)
    int Extract_Max()
    {
        if (nodes.empty())
        {
            cout << "Heap is empty!\n";
            return -1;
        }
        int ret = nodes[0];
        Delete(0);
        return ret;
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
    heap.insert(26);
    heap.insert(30);
    heap.insert(55);

    cout << "Max Elemetn: " << heap.get_Max() << "\n";

    cout << "Max Element: " << heap.Extract_Max() << "\n";
    cout << "Max Element: " << heap.Extract_Max() << "\n";

    // cout << "Befor Deleten\n";
    // heap.PrintHeap();

    // cout << "After Deleten\n";
    // heap.Delete(0);
    // heap.PrintHeap();
    return 0;
}
