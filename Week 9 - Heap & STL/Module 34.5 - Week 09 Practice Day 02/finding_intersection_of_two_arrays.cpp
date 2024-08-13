#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2;

    cin >> n1;
    set<int> arr1;
    for (int i = 0; i < n1; i++)
    {
        int num;
        cin >> num;
        arr1.insert(num);
    }

    cin >> n2;
    set<int> arr2;
    for (int i = 0; i < n2; i++)
    {
        int num;
        cin >> num;
        arr2.insert(num);
    }

    vector<int> intersection;
    for (const int &num : arr1)
    {
        if (arr2.find(num) != arr2.end())
        {
            intersection.push_back(num);
        }
    }

    sort(intersection.begin(), intersection.end());

    for (const int &num : intersection)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}