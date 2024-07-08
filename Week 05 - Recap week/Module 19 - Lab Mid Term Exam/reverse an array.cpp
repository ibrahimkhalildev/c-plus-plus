#include <bits/stdc++.h>

using namespace std;

void reverseArray(vector<int> &arr)
{
    int temp;
    int n = arr.size();
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int n;
    cout << "Input Array Size: ";

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr);

    cout << "Reverse Array is: " << '\n';

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}