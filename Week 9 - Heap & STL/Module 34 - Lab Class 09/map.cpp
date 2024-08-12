#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> mp;
    // Insert O(log n)
    mp["country"] = 100;
    mp["People"] = 18000000;
    mp["Health Score"] = 90;

    cout << mp["country"] << '\n';
    cout << mp["Health Score"] << "\n";

    mp["Health Score"] = 99;
    cout << mp["Health Score"] << "\n";
    cout << '\n';
    cout << '\n';

    // Print O(n)
    for (auto it : mp)
        cout << "Key : Value = " << it.first << " => " << it.second << '\n';
    cout <<"Size of Map 1 is: "<< mp.size();

    cout << '\n';
    cout << '\n';

    map<int, int> mp2;

    mp2[50] = 200;
    mp2[99] = 250;
    mp2[9510001] = 950;
    mp2[9510002] = 5045;
    mp2[9510000] = 5045;
    mp2[951] = 5045;

    // Print O(n)
    for (auto mpp : mp2)
        cout << "Key: " << mpp.first << ", Value: " << mpp.second << "\n";

    cout <<"Size of Map 2 is: "<< mp2.size();

    cout << '\n';


    return 0;
}
