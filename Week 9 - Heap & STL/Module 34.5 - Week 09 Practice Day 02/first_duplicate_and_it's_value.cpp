#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    map<int, int> arr_Index;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr_Index.find(arr[i]) != arr_Index.end())
        {
            cout << "First duplicate element is " << arr[i] << ", first occurring at index " << arr_Index[arr[i]] << "." << endl;
            return 0;
        }
        arr_Index[arr[i]] = i;
    }
    cout << "No duplicate elements found! \n";
    return 0;
}