//O(n) order n complexity 
#include <bits/stdc++.h>

using namespace std;

/*
Time Complexity = O(n +1 + n) = O(2*n+1) = O(2*n) = O(c*n) = O(n);
Space Complexity = O(n);

O(c*n) = O(n)
O(1*3) = O(1)
*/

int main()
{
    int n;

    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxx = a[0];
    int minn = a[0];
    int summ = 0;
    for (int i = 0; i < n; i++)
    {
        maxx = max(maxx, a[i]);
        minn = min(minn, a[i]);
        summ = summ + a[i];
    }

    cout << "Maximum = " << maxx << "\n";
    cout << "Minimum = " << minn << "\n";
    cout << "Sum = " << summ << "\n";

    return 0;
}