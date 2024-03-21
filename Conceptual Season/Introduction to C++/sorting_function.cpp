#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


