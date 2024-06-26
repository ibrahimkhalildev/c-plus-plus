// WAP that takes n integer numbers, sorts them using Quick sort. 
#include <bits/stdc++.h>

using namespace std;


void swap(int*a, int*b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int dividing(vector<int> & arr, int low, int high)
{
    int pivot = arr[high];
    int i = (low-1);

    for (int j = low; j <= high-1; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i +1], &arr[high]);
    return (i+1);
}

void quick_Sort(vector<int>&arr, int low, int high)
{
    if(low < high)
    {
        int pi = dividing(arr, low, high);

        quick_Sort(arr, low, pi -1);
        quick_Sort(arr, pi + 1, high);
    }
}

int main()
{
    int n;
    cout<<"Input a Number: "<<"\n";

    cin>>n;

    vector<int> arr(n);
    cout << "Enter Array elements: "<<"\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    quick_Sort(arr, 0, n-1);

    cout<<"Sorted Elements: "<<"\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout<< endl;

    return 0;
}