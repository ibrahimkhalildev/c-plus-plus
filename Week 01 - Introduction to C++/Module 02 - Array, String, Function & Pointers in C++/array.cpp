#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Input Array Size: ";
    cin>>n;
    cout<<"\n";
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //Printing given array;
    cout <<"\nYour given Array is: ";
    for(int i= 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    //Summation
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout<<"\nSummation = ";
    cout<<sum<<"\n";

    //Multiplication
    int x=1;
    for (int i = 0; i < n; i++)
    {
        x *= arr[i];
    }
    cout<<"Multiplication = ";
    cout<<x<<"\n";

    return 0;
}
