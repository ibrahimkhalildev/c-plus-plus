#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "999999999999999999999999";
    int sum = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int num = s[i] - '0';
        sum = sum + num;
    }

    cout << sum<< "\n";

    return 0;
}
