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

    void PrinHeap()
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

    int ExtractMax()
    {
        if (nodes.empty())
            return -1;
        int max = nodes[0];
        Delete(0);
        return max;
    }

    void buildHeap(const vector<int> &arr)
    {
        nodes = arr;
        for (int i = (nodes.size() / 2) - 1; i >= 0; --i)
        {
            down_heapify(i);
        }
    }
};

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    MaxHeap heap;
    heap.buildHeap(arr);

    vector<int> largestK;
    for (int i = 0; i < k; i++)
    {
        largestK.push_back(heap.ExtractMax());
    }

    for (int i = 0; i < k; i++)
    {
        cout << largestK[i] << " ";
    }
    cout << '\n';

    return 0;
}