// push_back(); // taking input
// pov_back(); // to delete last element
// back(); // to find last element
// size() // to get size
// front() // to get first element

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
    int firstElemnt = v.front(); //to get first element
    cout<<firstElemnt <<"\n";
    int lastElement = v.back(); //to get last element
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
