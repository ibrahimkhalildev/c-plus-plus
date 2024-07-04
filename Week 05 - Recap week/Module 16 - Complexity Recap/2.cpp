// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // Time complexity O(n^2)
    // Space Complexity O(n^2)
    vector<int> a(n * n);
    for (int i = 0; i < n * n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;

    for (int i = 0; i < n * n; i++)
    {
        sum = sum + a[i];
    }

    cout << sum << '\n';

    return 0;
}
