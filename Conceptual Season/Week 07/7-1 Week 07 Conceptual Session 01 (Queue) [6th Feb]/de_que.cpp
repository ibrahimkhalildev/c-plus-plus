#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_front(0);
    dq.push_front(1);

    while (!dq.empty())
    {
        cout<<dq.front()<<"\n";
        dq.pop_front();
        // dq.pop_back();
    }
    


    return 0;
}