#include <bits/stdc++.h>

using namespace std;

void sort_Ladder_Array(const vector<int> &arr)
{
    deque<int> dq;

    for (int num : arr)
        dq.push_back(num);

    vector<int> sorted_elements;
    while (!dq.empty())
    {
        sorted_elements.push_back(dq.front());
        dq.pop_front();
    }

    sort(sorted_elements.begin(), sorted_elements.end());

    for (int num : sorted_elements)
        cout << num << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort_Ladder_Array(arr);
    return 0;

    return 0;
}