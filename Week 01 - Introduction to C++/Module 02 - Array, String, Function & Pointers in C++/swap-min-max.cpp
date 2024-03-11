#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 10;
    int b = 99;
    cout << "Before swap:\n";
    cout << "a = " << a << " and b = " << b << "\n";
    swap(a, b);
    cout << "After Swap: \n";
    cout << "a = " << a << " and b = " << b << "\n";

    cout << "________________________________\n";
    cout << "Finding minimum: \n";
    int d = 5, f = 99, y = 108, n = 1;

    int minn = min(d, f);
    int minn2 = min({d, f, y, n}); // if more than two;

    cout << "The minimum is: " << minn << "\n";
    cout << "The minimum from three: " << minn2 << "\n";

    cout << "________________________________\n";
    cout << "Finding Maximum: \n";

    int ab = 99, ad = 998, af = 5847, jk = 987574;

    int maxx = max(ab, ad);
    int maxx2 = max({ad, af, jk}); // if more than two;
    cout << "The max is: " << maxx << "\n";
    cout << "The max from three is: " << maxx2 << "\n";

    vector<int> au = {3,2,4,5,1,};
    cout << "________________________________\n";
    cout<<"Before Sorting: \n";
    for (int i = 0; i < au.size(); i++)
    {
        cout<<au[i]<<" ";
    }
    cout<<"\n";

    cout<<"After sorting: \n";
    sort(au.begin(), au.end());
    for (int i = 0; i < au.size(); i++)
    {
        cout<<au[i]<<" ";
    }
    cout<<"\n";

    cout <<"________________________________\n";
    cout<<"Sorting: Specific Array\n";
    

    return 0;
}
