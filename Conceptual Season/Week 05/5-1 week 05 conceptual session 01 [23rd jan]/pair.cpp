#include <bits/stdc++.h>

using namespace std;

int main()
{
    // pair<string, int>p;
    pair<pair<string, string>, int> p;

    p.first.first = "Ibrahim";
    p.first.second = "Khalil";
    p.second = 100;
    // p.third = 100;

    cout << p.first.first <<" " << p.first.second << " "<<p.second<< "\n";

    return 0;
}
