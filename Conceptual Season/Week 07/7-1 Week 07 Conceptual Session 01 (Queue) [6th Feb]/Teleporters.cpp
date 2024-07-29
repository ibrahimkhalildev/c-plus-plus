#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        list<long long> l;
        for (int i = 1; i <= n; i++)
        {
            int in;
            cin >> in;
            l.push_back(i + in);
        }
        l.sort();
        int ans = 0;
        while (!l.empty() && c >= 1)
        {
            if ((c - l.front()) < 0)
                break;
            c -= l.front();
            l.pop_front();
            ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}
