#include <bits/stdc++.h>

using namespace std;

int sum_of_Array(vector<int> &arr, int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return arr[n - 1] + sum_of_Array(arr, n - 1);
}

int main()
{
    int n;
    cout << "Number of Array Element: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Input Elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = sum_of_Array(arr, n);

    cout << "The sum is: " << result << endl;

    return 0;
}