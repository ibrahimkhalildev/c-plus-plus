#include <bits/stdc++.h>

using namespace std;

int find_Max(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    int max_Rest = find_Max(arr, n - 1);

    return (arr[n - 1] > max_Rest) ? arr[n - 1] : max_Rest;
}

int main()
{
    int n;
    cout << "Input Size: ";
    cin >> n;

    int arr[n];
    cout << "Input Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxElement = find_Max(arr, n);
    cout << "Maximum element: " << maxElement << endl;

    return 0;
}
