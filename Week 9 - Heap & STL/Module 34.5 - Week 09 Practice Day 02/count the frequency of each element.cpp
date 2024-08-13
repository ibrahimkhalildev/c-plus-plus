#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> occurance;

    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        occurance[element]++;
    }

    for (const auto &pair : occurance)
    {
        cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}