#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c == '(' or c == '{' or c == '[')
            st.push(c);
        else if (c == ')' and st.empty() == false and st.top() == '(')
        {
            st.pop();
        }
        else if (c == '}' and st.empty() == false and st.top() == '{')
        {
            st.pop();
        }
        else if (c == ']' and st.empty() == false and st.top() == '[')
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    if (st.empty() == true )
    {
        cout << "valid" << '\n';
    }
    else
    {
        cout << "invalid" << '\n';
    }
    
    return 0;
}