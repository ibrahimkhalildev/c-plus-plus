#include <bits/stdc++.h>

using namespace std;

int main()
{

    // vector<map<string, string>>;
    // pair<map<string, string>, vector<int>> v;

    map<int, int> mp;

    mp[6] = 45;
    mp[5] = 98;
    mp[5] = 100;
    mp[3] = 4;
    mp[2] = 9;
    mp[1] = 10;

    for (auto it : mp)
        //cout << it.first << " " << it.second << '\n';
    cout << "key-> " << it.first << " -- " << "value-> " << it.second << '\n';

    return 0;
}
