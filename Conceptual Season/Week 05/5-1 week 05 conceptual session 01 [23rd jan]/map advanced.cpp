#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    map<int, int> mp;
    // mp[2] = 10;
    // cout <<mp[2]<< '\n';
    for (int i = 1; i <= n; i++)
    {
        int in;
        cin >> in;
        mp[in]++;
    }

    for (pair<int, int> q : mp)
    {
        cout << q.first << " " << q.second << '\n';
    }

    return 0;
}
