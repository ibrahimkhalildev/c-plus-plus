#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2;

    cin >> n1;
    set<int> set1;
    for (int i = 0; i < n1; i++)
    {
        int num;
        cin >> num;
        set1.insert(num);
    }
    cin >> n2;
    set<int> set2;
    for (int i = 0; i < n2; i++)
    {
        int num;
        cin >> num;
        set2.insert(num);
    }

    set<int> unionSet;
    unionSet.insert(set1.begin(), set1.end());
    unionSet.insert(set2.begin(), set2.end());

    for (const int &num : unionSet)
        cout << num << " ";
    cout << endl;

    return 0;
}