#include <bits/stdc++.h>

using namespace std;

int prec(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    if (ch == '*' || ch == '/')
    {
        return 2;
    }
    return 0;
}

string convert_infix_to_postfix(const string &s)
{
    stack<char> st;
    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {
        char now = s[i];
        if (now >= '0' && now <= '9')
        {
            ans += now;
        }
        else if (now == '(')
        {
            st.push(now);
        }
        else if (now == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else if (now == '+' || now == '-' || now == '*' || now == '/')
        {
            while (!st.empty() && prec(st.top()) >= prec(now))
            {
                ans += st.top();
                st.pop();
            }
            st.push(now);
        }
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}

int postfix_Calculation(const string &postfix)
{
    stack<int> st;
    for (int i = 0; i < postfix.length(); i++)
    {
        char now = postfix[i];
        if (isdigit(now))
        {
            st.push(now - '0');
        }
        else
        {
            int val2 = st.top();
            st.pop();
            int val1 = st.top();
            st.pop();
            int result;

            if (now == '+')
            {
                result = val1 + val2;
            }
            if(now == '-')
            {
                result = val1-val2;
            }
            else if (now == '*')
            {
                result = val1 * val2;
            }
            else if (now == '/')
            {
                result = val1 / val2;
            }
            st.push(result);
        }
    }
    return st.top();
}

int main()
{
    string s;
    cin >> s;
    string postfix = convert_infix_to_postfix(s);
    int result = postfix_Calculation(postfix);
    cout << result << "\n";

    return 0;
}
