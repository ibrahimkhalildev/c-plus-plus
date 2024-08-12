#include <bits/stdc++.h>

using namespace std;

int digit(int x)
{
    int cnt = 0;
    while (x != 0)
    {
        x = x / 10;
        cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    priority_queue<int> pq1;
    priority_queue<int> pq2;

    for (int i = 0; i < n; i++)
    {
        pq1.push(a[i]);
        pq2.push(b[i]);
    }
    int ans = 0;
    while (pq1.size())
    {
        int x = pq1.top();
        int y = pq2.top();
        if (x == y)
        {
            pq1.pop();
            pq2.pop();
            continue;
        }
        ans++;
        if (x > y)
        {
            pq1.pop();
            pq1.push(digit(x));
        }
        else
        {
            pq2.pop();
            pq2.push(digit(y));
        }
    }
    cout << ans << "\n";

    return 0;
}