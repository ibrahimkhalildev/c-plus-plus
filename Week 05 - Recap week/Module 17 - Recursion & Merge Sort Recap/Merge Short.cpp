#include <bits/stdc++.h>

using namespace std;

vector<int> merge_sort(vector<int> a)
{
    if (a.size() <= 1)
    {
        return a;
    }

    vector<int> Left;
    vector<int> Right;
    int mid = a.size() / 2;

    for (int i = 0; i < mid; i++)
    {
        Left.push_back(a[i]);
    }
    for (int i = mid; i < a.size(); i++)
    {
        Right.push_back(a[i]);
    }

    vector<int> sorted_Left = merge_sort(Left);
    vector<int> sorted_Right = merge_sort(Right);

    vector<int> ans;
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (p1 == sorted_Left.size())
        {
            ans.push_back(sorted_Right[p2]);
            p2++;
        }
        else if (p2 == sorted_Right.size())
        {
            ans.push_back(sorted_Left[p1]);
            p1++;
        }
        else if (sorted_Left[p1] < sorted_Right[p2])
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
    return ans;
}

int main()
{
    int n;
    cout << "Enter Size of Array: "<<'\n';
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }

    vector<int> ans = merge_sort(a);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
