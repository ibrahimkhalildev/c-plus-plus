#include <bits/stdc++.h>

using namespace std;

/*
Time Complexity O(1);
Space Complexity O(1);
*/

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maxx = max({a, b, c});
    int minn = min({a, b, c});
    int summ = a + b + c;
    int mul = a * b * c;

    cout<<maxx<<"\n";
    cout<<minn<<"\n";
    cout<<summ<<"\n";
    cout<<mul<<"\n";

    return 0;
}