// https://codeforces.com/problemset/problem/1780/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> o, e;
        for (int i = 1; i <= n; i++)
        {
            int in;
            cin >> in;
            if (in % 2 == 0)
                e.push_back({in, i});
            else
                o.push_back({in, i});
        }
        if (o.size() >= 3)
        {
            cout << "YES" << '\n';
            cout << o[0].second << " " << o[1].second << " " << o[2].second << '\n';
        }
        else if (o.size() >= 1 && e.size() >= 2)
        {
            cout << "YES" << '\n';
            cout << o[0].second << " " << e[0].second << " " << e[1].second << '\n';
        }
        else
            cout << "NO" << '\n';
    }

    return 0;
}