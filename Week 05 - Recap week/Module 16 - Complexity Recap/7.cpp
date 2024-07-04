// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, q;

    // Time complexity O(n^2)
    for (int i = 0; i < q; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << i << " " << j << '\n';
        }
    }

    return 0;
}
