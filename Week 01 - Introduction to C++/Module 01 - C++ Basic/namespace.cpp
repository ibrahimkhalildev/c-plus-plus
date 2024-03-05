#include <bits/stdc++.h>

using namespace std;

int x = 5, y = 10;

int func(int a, int b)
{
    return a + b;
}
namespace info
{
    int x = 15;
    int a = 10, b = 20;
    int func(int a, int b)
    {
        return a * b;
    }
}
int main()
{
    int x, a = 10, b = 20;
    x = info::func(a, b);

    cout << info::x << "\n";
    cout << x << "\n";

    return 0;
}
