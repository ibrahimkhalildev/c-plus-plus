#include <bits/stdc++.h>

using namespace std;

int findOut_1st_Occurrence(const vector<int>& arr, int k)
{
    int low = 0, high = arr.size() -1;
    int first_Occurrence = -1;
    while (low <= high)
    {
        int mid = (low + high) /2;
        if (arr[mid] ==k)
        {
            first_Occurrence = mid;
            high = mid -1;
        }
        else if(arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid -1;
        }        
    }
    return first_Occurrence;
}

int findOut_last_Occurrence(const vector<int> & arr, int k)
{
    int low = 0, high = arr.size()-1;
    int last_occurrence = -1;
    while (low <= high)
    {
        int mid = (low + high) /2;
        if (arr[mid] == k)
        {
            last_occurrence = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k)
        {
            low = mid +1;       
        }
        else
        {
            high = mid -1;
        }
    }
    return last_occurrence;  
}

string multiple_Occurrences(const vector<int> &arr, int k)
{
    int first_Occurrence = findOut_1st_Occurrence(arr, k);
    int last_Occurrence = findOut_last_Occurrence(arr, k);

    if (first_Occurrence != -1 && last_Occurrence != -1 && first_Occurrence != last_Occurrence)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{   
    int n;
    cin >> n;

    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    cout << multiple_Occurrences(arr, k) << endl;    

    return 0;
}