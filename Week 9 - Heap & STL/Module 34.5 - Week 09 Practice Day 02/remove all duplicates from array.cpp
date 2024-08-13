#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<int> uniqueElements;

    for (int i = 0; i < n; i++)
    {
        uniqueElements.insert(arr[i]);
    }

    for (auto it : uniqueElements)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}