#include <bits/stdc++.h>

using namespace std;

void print(list<int> l)
{
    // O(n)
    // list<int>::iterator a = l.begin();
    auto a = l.begin();
    while (a != l.end())
    {
        cout << *a << " ";
        a++;
    }
    cout << "\n";
}

int main()
{
    list<int> l;

    // push complexity O(1);
    l.push_front(10);
    l.push_front(15);
    l.push_front(35);
    l.push_front(65);
    l.push_front(91);

    print(l);

    // push_back O(1)
    l.push_back(100);
    l.push_back(523);
    print(l);

    // pop_back o(1)
    l.pop_back();
    print(l);

    // pop_fron O(1)
    l.pop_front();
    print(l);
    return 0;
}
