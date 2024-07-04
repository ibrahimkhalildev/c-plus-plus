#include <bits/stdc++.h>

using namespace std;

vector<int> merge_sort(vector<int> a)
{
    if (a.size() <= 1)
    {
        return a;
    }

    int mid = a.size() / 2;
    vector<int> Left(a.begin(), a.begin() + mid);
    vector<int> Right(a.begin() + mid, a.end());

    vector<int> sorted_Left = merge_sort(Left);
    vector<int> sorted_Right = merge_sort(Right);

    vector<int> ans;
    int p1 = 0, p2 = 0;

    while (p1 < sorted_Left.size() && p2 < sorted_Right.size())
    {
        if (sorted_Left[p1] < sorted_Right[p2])
        {
            ans.push_back(sorted_Left[p1]);
            p1++;
        }
        else
        {
            ans.push_back(sorted_Right[p2]);
            p2++;
        }
    }

    while (p1 < sorted_Left.size())
    {
        ans.push_back(sorted_Left[p1]);
        p1++;
    }

    while (p2 < sorted_Right.size())
    {
        ans.push_back(sorted_Right[p2]);
        p2++;
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> ans = merge_sort(a);

    cout << "Sorted elements: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
