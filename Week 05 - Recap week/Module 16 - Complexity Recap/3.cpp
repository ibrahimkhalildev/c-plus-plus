#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // Time complexity O(√n) or O(sqrt(n))
    // Space Complexity O(1)
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << '\n';
            cout << (n / i) << '\n';
        }
    }

    return 0;
}
