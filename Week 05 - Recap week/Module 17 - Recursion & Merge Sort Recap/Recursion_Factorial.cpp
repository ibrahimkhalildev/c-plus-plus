#include <bits/stdc++.h>

using namespace std;

double factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return factorial(n-1) * n;
}

int main()
{
    double n;
    cin >> n;
    cout << factorial(n) <<"\n";

    return 0;
}
