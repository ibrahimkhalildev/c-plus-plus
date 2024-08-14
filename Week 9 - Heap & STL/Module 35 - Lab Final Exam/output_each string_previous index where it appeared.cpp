#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    map<string, int> stringMap;
    vector<string> strings(n);

    for (int i = 0; i < n; i++)
    {
        getline(cin, strings[i]);
    }

    for (int i = 0; i < n; i++)
    {
        const string &str = strings[i];
        auto it = stringMap.find(str);
        if (it != stringMap.end())
            cout << it->second << endl;
        else
            cout << -1 << endl;
        stringMap[str] = i;
    }

    return 0;
}