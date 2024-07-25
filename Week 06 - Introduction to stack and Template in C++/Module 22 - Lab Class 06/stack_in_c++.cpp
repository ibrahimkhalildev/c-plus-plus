#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;

    // push
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << '\n';

    // size
    cout << "Stack Size: " << st.size() << '\n';

    // pop
    st.pop();
    cout << st.top() << '\n';
    st.pop();
    cout << st.top() << '\n';
    st.pop();

    // size
    cout << "Stack Size: " << st.size() << '\n';

    return 0;
}
