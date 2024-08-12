#include <bits/stdc++.h>

using namespace std;

class MinHeap
{
public:
    vector<int> nodes;

    MinHeap() {}

    // Complexity O(log n)
    void up_heapify(int idx)
    {
        while (idx > 0 && nodes[idx] < nodes[(idx - 1) / 2])
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

    // Complexity O(log n)
    void down_heapify(int idx)
    {
        while (1)
        {
            int smallest = idx;
            int left_child = 2 * idx + 1;
            int right_child = 2 * idx + 2;
            if (left_child < nodes.size() && nodes[smallest] > nodes[left_child])
            {
                smallest = left_child;
            }
            if (right_child < nodes.size() && nodes[smallest] > nodes[right_child])
            {
                smallest = right_child;
            }
            if (smallest == idx)
                break;
            swap(nodes[idx], nodes[smallest]);
            idx = smallest;
        }
    }

    // Complexity O(log n)
    void Delete(int idx)
    {
        if (idx >= nodes.size())
            return;
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    // Complexity O(log n)
    int Extract_Min()
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

    // Complexity O(n)
    void build_from_array(vector<int> &a)
    {
        nodes = a;
        int n = nodes.size();
        int last_non_leaf = n / 2 - 1;
        for (int i = last_non_leaf; i >= 0; i--)
        {
            down_heapify(i);
        }
    }
};

// Complexity O(n log n)
vector<int> heap_sort(vector<int> a)
{
    MinHeap h;
    h.build_from_array(a);


    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        ans.push_back(h.Extract_Min());
    }
    return ans;
}

int main()
{
    vector<int> a = {10, 2, 3, 4, 11, 9, 5, 7, 1, 0};

    // Create a MinHeap instance and build it from the input array
    MinHeap minHeap;
    minHeap.build_from_array(a);

    // Print heap structure before sorting
    cout << "Heap structure before sorting:\n";
    minHeap.PrintHeap();

    // Perform heap sort and print sorted array
    cout << "Sorted array:\n";
    vector<int> sorted_a = heap_sort(a);
    for (int i = 0; i < sorted_a.size(); i++)
    {
        cout << sorted_a[i] << " ";
    }
    cout << "\n";

    return 0;
}
