#include <iostream>
#include <vector>

using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function for Quick Sort
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Choose the last element as pivot
    int i = low - 1; // Index of the smaller element

    for (int j = low; j < high; j++) {
        // If current element is greater than or equal to pivot (for non-increasing order)
        if (arr[j] >= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Quick Sort function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // pi is the partitioning index
        quickSort(arr, low, pi - 1); // Recursively sort elements before partition
        quickSort(arr, pi + 1, high); // Recursively sort elements after partition
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted array in non-increasing order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
