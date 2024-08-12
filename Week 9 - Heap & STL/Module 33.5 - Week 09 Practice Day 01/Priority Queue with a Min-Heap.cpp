#include <bits/stdc++.h>

using namespace std;

class MinHeap
{
public:
    vector<int> nodes;

    MinHeap()
    {
    }

    void up_heapify(int idx)
    {
        while (idx > 0 && nodes[idx] < nodes[(idx - 1) / 2])
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
        cout << "\n";
    }

    void down_heapify(int idx)
    {
        while (1)
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
        if (idx == nodes.size())
            return;
        swap(nodes[idx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    int get_Min()
    {
        if (nodes.empty())
        {
            cout << "Heap is empty!\n";
            return -1;
        }
        return nodes[0];
    }

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

    void build_from_Array(vector<int> &a)
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
    MinHeap h;

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
        return h.get_Min();
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
    pq.push(10);
    pq.push(3);
    pq.push(9);
    pq.push(4);
    pq.push(11);
    pq.push(1);

    while (pq.size() != 0)
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl;

    return 0;
}