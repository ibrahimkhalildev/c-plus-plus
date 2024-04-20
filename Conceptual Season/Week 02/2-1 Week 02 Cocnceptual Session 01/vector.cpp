//push_back;

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // vector<int> v;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        // int input;
        cin >> v[i];
        // v.push_back(input);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    return 0;
}

/*
5
2 4 15 6 35
*/
