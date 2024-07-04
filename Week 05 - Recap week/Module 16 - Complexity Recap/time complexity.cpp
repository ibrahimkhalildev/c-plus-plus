// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // Time complexity O(n)
    // Space Complexity O(n)
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    cout << sum << '\n';
    


    return 0;
}