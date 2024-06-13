#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j/= 2)
        {
            v.push_back(j);
        }
    }

    return 0;
}
