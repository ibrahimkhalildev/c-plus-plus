#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n / 2; i <= n; i++)
    {
        for (int j = 1; j <= n; j *= 2)
        {
            cout << i << " " << j << endl;
        }
    }

    return 0;
}
