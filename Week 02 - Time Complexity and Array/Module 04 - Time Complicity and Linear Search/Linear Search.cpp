#include <bits/stdc++.h>
using namespace std;

/*
Time Comolexity = O(n);
Space Compl = O(n);
*/

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //Print yes
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cout<<"Yes"<<"\n";
            break;
        }
    }
    //Print index
    for (int i = 0; i < n; i++)
    {
        if(a[i] == k)
        {
            cout<<i<<"\n";
            break;
        }
    }
    //how many index containig the value
    for (int i = 0; i < n; i++)
    {
        if(a[i] == k)
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n";

    //The value matching with k
    for(int i = 0; i<n; i++)
    {
        if(a[i] == k)
            cout<<a[i]<<" ";
    }
    cout<<"\n";

    return 0;
}

/*
7 5
7 8 9 5 9 4 5
*/
