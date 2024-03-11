#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int *x = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
    cout<<x<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout<<x[i]<<"\n";
    }


    // int *x = new int;
    // *x =10;
    // cout<<x<<"\n";
    // cout<<*x<<"\n";
    // delete x;
    delete[] x;
    return 0;
}
