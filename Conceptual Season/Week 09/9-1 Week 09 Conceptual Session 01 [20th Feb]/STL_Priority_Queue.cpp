#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(19);
    pq.push(7);
    pq.push(8);
    pq.push(6);
    pq.push(2);
    pq.push(6);
    cout << pq.size()<< '\n';
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    cout << pq.size()<< '\n';

    return 0;
}
