#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> d(n + 1); // Use vector of vectors for better practice
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            d[i].push_back(j);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (const int& val : d[i]) // Use range-based for loop
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
