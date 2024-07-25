#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<int> st;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c == '(')
            st.push(c);
        else if (c == ')' && st.empty() == false && st.top() == '(')
        {
            st.pop();
            count++;
        }
        else
            st.push(c);
    }
    cout << count * 2;

    return 0;
}
