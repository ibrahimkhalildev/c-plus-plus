#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> st;
    // Insert O(logn)
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(1);
    st.insert(1);
    // Print O(n)
    cout << "Printing Set 1\n";
    for (auto i : st)
        cout << i << " ";
    cout << '\n';

    // Size O(1);
    cout << "Set Size: " << st.size() << '\n';
    // Print O(n)
    cout << "Printing Set 2\n";
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    // Erase O(log n)
    st.erase(5);

    cout << "Printing set After erasing 5\n";
    for (auto i : st)
        cout << i << " ";
    cout << '\n';

    cout << "Printing set After erasing 8\n";
    for (auto i : st)
        cout << i << " ";
    cout << '\n';

    // Find O(log n)
    if (st.find(20) != st.end())
        cout << "Found!\n";
    else
        cout << "Not found!\n";
    return 0;
}
