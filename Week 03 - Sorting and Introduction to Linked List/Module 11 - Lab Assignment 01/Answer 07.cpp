#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int a, b;
    
    cin >> a >> b;

    a -=1;
    b-= 1;

    vector<int> rest_Elements;
    for (int i = 0; i < a; i++)
    {
        rest_Elements.push_back(arr[i]);
    }
    for (int i = b + 1; i < n; i++)
    {
        rest_Elements.push_back(arr[i]);
    }
    for (int i = 0; i < rest_Elements.size(); i++)
    {
        cout << rest_Elements[i];
        if(i != rest_Elements.size() -1)
        {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}