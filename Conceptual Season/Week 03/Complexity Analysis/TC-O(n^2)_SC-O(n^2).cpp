#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> d[n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            d[i].push_back(j);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < d[i].size(); j++)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
