#include <bits/stdc++.h>

using namespace std;

bool binary_Search(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int query;
        cin >> query;
        if (binary_Search(arr, n, query))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
