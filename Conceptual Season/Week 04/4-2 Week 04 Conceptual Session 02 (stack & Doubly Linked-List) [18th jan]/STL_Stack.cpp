#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> numset;

    numset.push(10);
    numset.push(50);
    numset.push(29);
    numset.push(83);
    numset.push(910);

    while (numset.empty() == false)
    {
        cout << numset.top() <<" ";
        numset.pop();
    }
    cout<< '\n';


    // if (numset.empty() == false)
    // {
    //     numset.pop();
    // }
    // if (numset.empty() == false)
    // {
    //     numset.pop();
    // }
    // if (numset.empty() == false)
    // {
    //     numset.pop();
    // }
    // if (numset.empty() == false)
    // {
    //     numset.pop();
    // }
    // if (numset.empty() == false)
    // {
    //     numset.pop();
    // }
    // if (numset.empty() == false)
    // {
    //     cout << numset.top() << '\n';
    // }

    // cout << numset.top() << '\n';
    // cout << numset.empty() << '\n';

    return 0;
}
