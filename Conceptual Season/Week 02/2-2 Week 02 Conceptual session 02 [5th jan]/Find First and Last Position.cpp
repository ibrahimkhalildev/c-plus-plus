// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5, 6};
    int first_idx = -1;
    int target = 3;
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            first_idx = mid;
            high = mid - 1;
        }
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
    }
    // cout << first_idx;
    int last_idx = -1;
    low = 0;
    high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            last_idx = mid;
            low = mid + 1;
        }
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
    }
    cout << first_idx << " " << last_idx;

    return 0;
}
