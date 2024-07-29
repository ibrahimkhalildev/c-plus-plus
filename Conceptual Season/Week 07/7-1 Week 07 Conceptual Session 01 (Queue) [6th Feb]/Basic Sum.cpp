#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> pref(n + 1);
    for (int i = 1; i <= n; i++)
        pref[i] = (pref[i - 1] + v[i]);

    // for (int i = 0; i <= n; i++)
    // {
    //     cout << pref[i] << " ";
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << " ";
    }

    return 0;
}

/*
5
2 4 1 3 9
4
1 3
2 4
2 5
1 5
*/
