#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {50,34,90,79,100};
    int mn = arr[0];
    for (int i = 0; i < 5; i++)
    {
        mn = min(mn,arr[i]);
        // if (arr[i]<mn)
        // {
        //     mn = arr[i];
        // }
    }
    cout<<mn<<endl;

    return 0;
}
