#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr[i] = make_pair(value, i);
    }

    sort(arr.begin(), arr.end(), compare);

    for (auto it : arr)
    {
        cout << "Value " << it.first << ", Previoues Index " << it.second << '\n';
    }

    return 0;
}
