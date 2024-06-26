#include <bits/stdc++.h>

using namespace std;

bool is_Subset(vector<int> & arr1, const vector<int> & arr2)
{
    vector<int> sorted_Arr2 = arr2;
    sort(sorted_Arr2.begin(), sorted_Arr2.end());

    for (int num : arr1)
    {
        if (!binary_search(sorted_Arr2.begin(), sorted_Arr2.end(), num))
        {
            return false;
        }       
    }
    return true;
}

int main()
{
    int n1, n2;
    cin >> n1;
    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    
    cin >> n2;
    vector<int> arr2(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    
    if (is_Subset(arr1, arr2))
    {
        cout<< "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}