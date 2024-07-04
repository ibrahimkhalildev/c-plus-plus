// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, q;

    // Time complexity O(n * log(n))
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j + i) // j+i
        {
            cout << i << " " << j << "\n";
        }
    }

    return 0;
}
