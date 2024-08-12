#include <bits/stdc++.h>

using namespace std;

class MinHeap
{
public:
    vector<int> nodes;
    MinHeap()
    {
    }

    void up_heapify()
    {
        int cur_idx = nodes.size() - 1;
        int comp_idx = (cur_idx - 1) / 2;

        while (cur_idx >= 0 and comp_idx >= 0 and nodes[cur_idx] < nodes[comp_idx])
        {
            swap(nodes[cur_idx], nodes[comp_idx]);
            cur_idx = comp_idx;
            comp_idx = (cur_idx - 1) / 2;
        }
    }

    void insert(int val)
    {
        nodes.push_back(val);
        up_heapify();
    }

    void down_heapify(int idx)
    {
        while (true)
        {
            int cur_idx = idx;
            int cur_left = cur_idx * 2 + 1;
            int cur_right = cur_idx * 2 + 2;

            if (cur_left < nodes.size() and nodes[cur_idx] > nodes[cur_left])
            {
                cur_idx = cur_left;
            }
            if (cur_right < nodes.size() and nodes[cur_idx] > nodes[cur_right])
            {
                cur_idx = cur_right;
            }
            if (cur_idx == idx)
            {
                break;
            }
            swap(nodes[cur_idx], nodes[idx]);
            idx = cur_idx;
        }
    }

    void Delete(int idx)
    {
        if (nodes.empty() == true)
        {
            return;
        }
        int last_idx = nodes.size() - 1;
        swap(nodes[0], nodes[last_idx]);
        nodes.pop_back();
        down_heapify(0);
    }

    int ExactMin()
    {
        if (nodes.empty() == true)
        {
            return -1;
        }
        int returnNum = nodes[0];
        Delete(0);
        return returnNum;
    }

    void display()
    {
        for (auto it : nodes)
        {
            cout << it << ' ';
        }
        cout << "\n";
    }
};

vector<int> heapSort(vector<int> &v)
{
    MinHeap mh;
    for (auto it : v)
        mh.insert(it);
    vector<int> result;
    for (int i = 0; i < v.size(); i++)
    {
        result.push_back(mh.ExactMin());
    }
    return result;
}

int main()
{
    // MinHeap mh;

    // mh.insert(7);
    // mh.insert(5);
    // mh.insert(9);
    // mh.insert(10);
    // mh.insert(4);
    // mh.insert(3);
    // mh.insert(2);
    // mh.insert(1);

    // mh.display();

    vector<int> v = {7, 5, 9, 10, 4, 3, 2, 1};
    vector<int> sort_v = heapSort(v);
    for (auto it : sort_v)
    {
        cout << it << ' ';
    }

    cout << '\n';
    return 0;
}