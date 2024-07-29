#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;

    q.push(7);
    q.push(10);
    q.push(15);
    q.push(22);

    while (!q.empty())
    {
        cout << q.front() << "\n";
        q.pop();
    }

    return 0;
}