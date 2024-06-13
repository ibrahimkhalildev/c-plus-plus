#include <iostream>
#include <vector>

using namespace std;

// Function to merge two halves of the array and count inversions
int merge_and_count(vector<int> &arr, vector<int> &temp_arr, int left, int mid, int right)
{
    int i = left;    // Starting index for left subarray
    int j = mid + 1; // Starting index for right subarray
    int k = left;    // Starting index to be sorted
    int inv_count = 0;

    // Conditions are checked to ensure that i doesn't exceed mid and j doesn't exceed right
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp_arr[k++] = arr[i++];
        }
        else
        {
            temp_arr[k++] = arr[j++];
            inv_count += (mid - i + 1);
        }
    }

    // Copy the remaining elements of left subarray, if any
    while (i <= mid)
    {
        temp_arr[k++] = arr[i++];
    }

    // Copy the remaining elements of right subarray, if any
    while (j <= right)
    {
        temp_arr[k++] = arr[j++];
    }

    // Copy the sorted subarray into Original array
    for (i = left; i <= right; i++)
    {
        arr[i] = temp_arr[i];
    }

    return inv_count;
}

// Function to recursively divide the array and count inversions
int merge_sort_and_count(vector<int> &arr, vector<int> &temp_arr, int left, int right)
{
    int mid, inv_count = 0;
    if (left < right)
    {
        mid = (left + right) / 2;

        inv_count += merge_sort_and_count(arr, temp_arr, left, mid);
        inv_count += merge_sort_and_count(arr, temp_arr, mid + 1, right);

        inv_count += merge_and_count(arr, temp_arr, left, mid, right);
    }
    return inv_count;
}

// Function to count inversions in the array
int count_inversions(vector<int> &arr)
{
    vector<int> temp_arr(arr.size());
    return merge_sort_and_count(arr, temp_arr, 0, arr.size() - 1);
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = count_inversions(arr);
    cout << "Number of inversions are " << result << endl;

    return 0;
}
