// O(n) order n complexity
#include <bits/stdc++.h>

using namespace std;

/*
Time Complexity = O((n^2/2))= O(n^2);
/Space Complexity = O(n);

O(c*n) = O(n)
O(1*3) = O(1)
*/

int main()
{
    int n;

    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        string ans = "No\n";
        for (int j = i + 1; j < n; j++)
        {
            if (i == j)
                continue;
            if (a[i] == a[j])
            {
                ans = "Yes\n";
            }
        }
        cout << "Answer = " << ans << "\n";
    }

    return 0;
}
