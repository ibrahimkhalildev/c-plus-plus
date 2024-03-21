#include <bits/stdc++.h>

using namespace std;

void print(int ***x)
{
    ***x = 759;
   // cout<<x;
}

int main()
{
    int a = 92;
    int *p = &a;
    int **pt = &p; 
    int ***ptr = &pt;

    print(ptr);
    cout<<a<<endl;
    return 0;
}
