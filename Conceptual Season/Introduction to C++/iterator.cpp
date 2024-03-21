#include <bits/stdc++.h>

using namespace std;

int main()
{
    string st = "abcdasdfEFG";
    string::iterator it; // it is name of iterator;
    for (it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Reverse Iterator
    string sv = "Morning Time";
    // string::reverse_iterator sv;
    for (string::reverse_iterator ti = sv.rbegin(); ti != sv.rend(); ti++)
    {
        cout << *ti << " ";
    }
    cout << endl;

    for (auto ti = sv.rbegin(); ti != sv.rend(); ti++)
    {
        cout << *ti << " ";
    }
    cout << endl;
    return 0;
}
