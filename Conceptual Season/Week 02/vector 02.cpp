// push_back();
// pov_back();
// back();
// size() 
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // vector<int> v;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    int firstElemnt = v.front();
    cout<<firstElemnt <<"\n";
    int lastElement = v.back();
    cout << lastElement << "\n";
    // int sz = v.size();
    // for (int i = 0; i < sz; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << "\n";
    v.pop_back();
    int sz = v.size();

    for (int i = 0; i < sz; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

/*
5
2 4 15 6 3
*/
