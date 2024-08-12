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

    // O(log n)
    void Delete(int idx)
    {
        if (idx >= nodes.size())
            return;
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    // O(1)
    int get_Max()
    {
        if (nodes.empty())
        {
            cout << "Heap is empty!\n";
        }
        return nodes[0];
    }

    // O(log n)
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

    // O(n)
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

    int size()
    {
        return nodes.size();
    }
};

class priorityQueue
{
public:
    MaxHeap h;
    priorityQueue()
    {
    }

    void push(int x)
    {
        h.insert(x);
    }

    void pop()
    {
        h.Delete(0);
    }

    int top()
    {
        return h.get_Max();
    }

    int size()
    {
        return h.size();
    }
};

int main()
{
    priorityQueue pq;

    pq.push(5);
    pq.push(7);
    pq.push(10);
    pq.push(1);
    pq.push(2);

    while (pq.size() != 0)
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
