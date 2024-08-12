#include <bits/stdc++.h>

using namespace std;

int main()
{
    multiset<int> a;

    a.insert(10);
    a.insert(3);
    a.insert(2);
    a.insert(3);
    a.insert(6);
    a.insert(10);
    a.insert(5);

    // Insert O(log n)
    cout << "Printing the multiset: \n";
    for (auto it : a)
        cout << it << " ";
    cout << '\n';
    // Printing size of multiset - O(1)
    cout << "Size of the multiset: " << a.size() << "\n";

    // Erase O(log n)
    cout << "Multiset after erase for all occurance: \n";
    a.erase(10);
    for (auto it : a)
        cout << it << " ";
    cout << '\n';

    // Erase for single occurance O(log n)
    cout << "Multiset after erase for single occurance: \n";
    a.erase(a.find(3));
    for (auto v : a)
        cout << v << " ";
    cout << '\n';

    // find O(log n)
    cout << "Searchin Elements: \n";
    if (a.find(2) != a.end())
        cout << "2 is exist\n";
    else
        cout << "Not exist\n";

    cout << "Searchin Elements 10: \n";
    if (a.find(10) != a.end())
        cout << "10 is Exist";
    else
        cout << "10 not exist!\n";

    return 0;
}
