#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 9857448;
    // int count = 0;

    // complexity O(n)
    // while (n != 0)
    // {
    //     n /= 10;
    //     count++;
    // }
    // cout << count;

    // complexity O(1)
    cout << (int)log10(n) + 1<<'\n';

    return 0;
}
