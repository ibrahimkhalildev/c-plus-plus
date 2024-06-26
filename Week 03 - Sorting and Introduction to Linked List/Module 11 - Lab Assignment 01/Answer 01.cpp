#include <bits/stdc++.h>

using namespace std;

void sap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low -1;

    for (int j = low; j < high; j++)
    {
        if(arr[j] >= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i + 1);
}

void quick_Sort(vector<int>& arr, int low, int high)
{
    if(low < high)
    {
        int p_index = partition(arr, low, high);
        quick_Sort(arr, low, p_index-1);
        quick_Sort(arr, p_index + 1, high);
    }
}

int main()
{   
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    quick_Sort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}