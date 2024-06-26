#include <bits/stdc++.h>

using namespace std;

int count_Pairs(const vector<int> & leftArr, const vector<int> & rightArr, int k)
{
    int count = 0;
    int l = 0, r = rightArr.size() -1;

    while (l < leftArr.size() && r >= 0)
    {
        int sum = leftArr[l] + rightArr[r];
        if (sum == k)
        {
            count ++;
            l++;
            r--;
        }
        else if (sum < k)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    return count;
}

int merge_and_Count(vector<int>&arr, int left, int mid, int right, int k)
{
    int count = 0;
    vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);

    count += count_Pairs(leftArr, rightArr, k);

    int l = 0, r = 0, m= left;
    while (l < leftArr.size() && r < rightArr.size())
    {
        if (leftArr[l] <= rightArr[r])
        {
            arr[m++] = leftArr[l++];
        }
        else
        {
            arr[m++] = rightArr[r++];
        }
    }
    while (l < leftArr.size())
    {
        arr[m++] = leftArr[l++];
    }
    while (l < leftArr.size())
    {
        arr[m++] = leftArr[l++];
    }
    while (r < rightArr.size())
    {
        arr[m++] = rightArr[r++];
    }
    return count;
}

int sorting_and_Count(vector<int>&arr, int left, int right, int k)
{
    int count = 0;
    if(left<right)
    {
        int mid = left + (right - left) /2;

        count += sorting_and_Count(arr, left, mid, k);
        count += sorting_and_Count(arr, mid + 1, right, k);
        count += merge_and_Count(arr, left, mid, right, k);
    }
    return count;
}

int main()
{
    int n, k;
    cin>> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    cin >> k;
    int result = sorting_and_Count(arr, 0, n-1, k);
    cout << result << endl;

    return 0;
}
