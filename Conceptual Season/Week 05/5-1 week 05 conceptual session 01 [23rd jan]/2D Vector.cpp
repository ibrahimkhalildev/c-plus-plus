#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> v(10);

    v[0].push_back(10);
    v[0].push_back(25);
    v[0].push_back(45);

    v[1].push_back(70);

    v[2].push_back(87);
    v[2].push_back(66);
    v[2].push_back(99);
    v[2].push_back(49);

    //cout << v[2][1] << '\n';
    cout << v[2].size() << '\n';

    return 0;
}
