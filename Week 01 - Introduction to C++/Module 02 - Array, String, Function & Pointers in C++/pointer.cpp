#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 12;
    int *y = &x;
    int *z = &y; //how to store memory address of y;

    cout<<x<<"\n";
    cout<<y<<"\n";
    cout<<*y<<"\n";

    x = 455;
    cout<<x<<"\n";
    cout<<y<<"\n";
    cout<<*y<<"\n\n";
    cout<<*z<<"\n";
    return 0;
}
