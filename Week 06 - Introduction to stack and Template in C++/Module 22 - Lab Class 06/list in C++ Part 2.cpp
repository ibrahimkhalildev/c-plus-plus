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

// O(n)
void Insert(list<int> &l, int index, int value)
{
    auto it = l.begin(); // O(1)
    advance(it, index);  // O(index)
    l.insert(it, value); // O(1)
}

void Delete(list<int> &l, int index)
{
    auto it = l.begin(); // O(1)
    advance(it, index);  // O(index)
    l.erase(it);         // O(1)
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

    // insert at any position
    Insert(l, 1, 922);
    print(l);

    // delete at any position
    Delete(l, 0);
    print(l);
    // Delete(l, 0);
    //  size
    cout << l.size() << "\n";

    return 0;
}
