#include <bits/stdc++.h>

using namespace std;

bool palindrome_Checker(const string &s)
{
    deque<char> dq(s.begin(), s.end());

    while (dq.size() > 1)
    {
        if (dq.front() != dq.back())
        {
            return false;
        }
        dq.pop_front();
        dq.pop_back();
    }
    return true;
}

int main()
{
    string s;
    cin >> s;

    if (palindrome_Checker(s))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}